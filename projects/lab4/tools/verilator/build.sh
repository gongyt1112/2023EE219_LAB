#!/bin/bash

VERSION="v23.1"

COPYRIGHT="ShanghaiTech University\nIntelligent Computing System"

EMU_FILE="emu"
V_TOP_FILE="top.v"
PARAMETERS=
VERILATORFLAGS=
BUILD="false"
SIMULATE="false"
CFLAGS=
LDFLAGS="-lz"
GDB="false"
CLEAN="false"

PROJ_FOLDER=$PWD
SOURCE_FOLDER=$PROJ_FOLDER/src
VSRC_FOLDER="vsrc"
CSRC_FOLDER="csrc"
BUILD_PATH=$PROJ_FOLDER/build/hw

while getopts 't:bsgca:f:l:v:' OPT; do
    case $OPT in
        t)  V_TOP_FILE="$OPTARG";;
        b)  BUILD="true";;
        s)  SIMULATE="true";;
        g)  GDB="true";;
        c)  CLEAN="true";;
        a)  PARAMETERS="$OPTARG";;
        f)  CFLAGS="$OPTARG";;
        l)  LDFLAGS="$OPTARG";;
        v)  VERILATORFLAGS="$OPTARG";;
    esac
done

build_proj() {

    # get all .cpp files
    CSRC_LIST=`find -L $SOURCE_FOLDER/$CSRC_FOLDER -name "*.cpp"`
    for CSRC_FILE in ${CSRC_LIST[@]}
    do
        CSRC_FILES="$CSRC_FILES $CSRC_FILE"
    done
    # get all vsrc subfolders
    VSRC_SUB_FOLDER=`find -L $SOURCE_FOLDER/$VSRC_FOLDER -type d`
    for SUBFOLDER in ${VSRC_SUB_FOLDER[@]}
    do
        INCLUDE_VSRC_FOLDERS="$INCLUDE_VSRC_FOLDERS -I$SUBFOLDER"
    done
    # get all csrc subfolders
    CSRC_SUB_FOLDER=`find -L $SOURCE_FOLDER/$CSRC_FOLDER -type d`
    for SUBFOLDER in ${CSRC_SUB_FOLDER[@]}
    do
        INCLUDE_CSRC_FOLDERS="$INCLUDE_CSRC_FOLDERS -I$SUBFOLDER"
    done

    if [[ "$GDB" == "true" ]]; then
        CFLAGS="$CFLAGS -ggdb"
    fi

    # compile
    eval "verilator --x-assign unique --cc --exe --trace --assert -O3  -Wno-TIMESCALEMOD $VERILATORFLAGS -CFLAGS \"-std=c++11 -Wall $INCLUDE_CSRC_FOLDERS $CFLAGS\" -LDFLAGS $LDFLAGS -o $BUILD_PATH/$EMU_FILE \
        -Mdir $BUILD_PATH/emu-compile $INCLUDE_VSRC_FOLDERS --build $V_TOP_FILE $CSRC_FILES"
    if [ $? -ne 0 ]; then
        echo "Failed to run verilator!!!"
        exit 1
    fi
}


# Build
if [[ "$BUILD" == "true" ]]; then
    # clean build path
    [[ -d $BUILD_PATH ]] && find $BUILD_PATH -type l -delete
    build_proj
fi

# Simulate
if [[ "$SIMULATE" == "true" ]]; then
    EMU_PATH=$BUILD_PATH/$EMU_FILE
    # run simulation program
    echo "Simulating..."
    [[ "$GDB" == "true" ]] && gdb -s $EMU_PATH --args $EMU_PATH $PARAMETERS || $EMU_PATH $PARAMETERS
    if [ $? -ne 0 ]; then
        echo "Failed to simulate!!!"
        FAILED="true"
    fi
fi

# Clean
if [[ "$CLEAN" == "true" ]]; then
    rm -rf $PROJECT_PATH/$BUILD_FOLDER
    exit 0
fi
