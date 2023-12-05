# =====================================
# You can modify the code here
# =====================================
IMG=demo
TRANSPOSE=false
ISSUE_NUM=1

# =====================================
# DO NOT Modify the below code
# =====================================
TOP_PATH=$(shell pwd)
PROJECT_NAME=$(notdir $(CURDIR:%/=%))

VERILATOR_PATH=./tools/verilator/build.sh 
COMPILOR_PATH=./tools/compile/Compile.py
DATACREATOR_PATH=./tools/test/MatrixGen.py

BUILD_SW_FOLDER=./build/sw

DUMP_FILE=dumpdata.txt
INST_FULLPATH:=${BUILD_SW_FOLDER}/${IMG}.bin
IMG_PULLPATH:=${BUILD_SW_FOLDER}/ramdata.txt
DUMP_PULLPATH_1:=${BUILD_SW_FOLDER}/dumpdata_1.txt
DUMP_PULLPATH_2:=${BUILD_SW_FOLDER}/dumpdata_2.txt
DUMP_PULLPATH_3:=${BUILD_SW_FOLDER}/dumpdata_D.txt
DUMP_PULLPATH_4:=${BUILD_SW_FOLDER}/dumpdata_DT.txt

SIM_PARAMETER="${INST_FULLPATH} ${IMG_PULLPATH} ${DUMP_PULLPATH_1} ${DUMP_PULLPATH_2} ${DUMP_PULLPATH_3} ${DUMP_PULLPATH_4}"

define mkdir_if_not_exist
	@if [ ! -d $(1) ]; then \
		echo "Creating directory $(1)"; \
		mkdir $(1); \
	fi
endef

init:
	@chmod +x ${VERILATOR_PATH}
	@$(call mkdir_if_not_exist,./build)
	@$(call mkdir_if_not_exist,./build/hw)
	@$(call mkdir_if_not_exist,./build/sw)

build: init
	${VERILATOR_PATH} -b -v -GISSUE_NUM=${ISSUE_NUM}
build_gdb:
	${VERILATOR_PATH} -b -g -v -GISSUE_NUM=${ISSUE_NUM}

sim: build
	${VERILATOR_PATH} -s -a ${SIM_PARAMETER}
sim_gdb:
	${VERILATOR_PATH} -s -g -a ${SIM_PARAMETER}

matrix:
	python ${DATACREATOR_PATH} -r $(BUILD_SW_FOLDER)/ramdata.txt -t $(BUILD_SW_FOLDER)/testdata.txt -T $(BUILD_SW_FOLDER)/testdata_T.txt

compile:
	python ${COMPILOR_PATH}  -i ./src/asm/${IMG}.asm -o ${BUILD_SW_FOLDER}/${IMG}.bin -n ${ISSUE_NUM}


test_inst:
ifneq ($(findstring $(IMG), task1_1  task2_1),)
	python ./tools/test/TestInst1.py -d ${BUILD_SW_FOLDER}/dumpdata_1.txt
else
	python ./tools/test/TestInst2.py -d ${BUILD_SW_FOLDER}/dumpdata_2.txt
endif

test_mac: 
ifeq ($(TRANSPOSE), true)
	python ./tools/test/TestMac.py -d ${BUILD_SW_FOLDER}/dumpdata_DT.txt -t ${BUILD_SW_FOLDER}/testdata_T.txt
else
	python ./tools/test/TestMac.py -d ${BUILD_SW_FOLDER}/dumpdata_D.txt -t ${BUILD_SW_FOLDER}/testdata.txt
endif 

ifneq ($(findstring $(IMG), task1_2  task2_2 task3_2),)
test: test_mac
else ifneq ($(findstring $(IMG), task1_1  task2_1 task3_1),)
test: test_inst
else 
test: init
endif

run: init compile build sim test
	@echo Done

demo: clean init compile sim 
	@echo Demo

clean:
	-rm -r ./build/hw/emu-compile
	-rm -r ./build/hw/emu
	-rm -r ./build/sw

clear:
	-rm -r ./build/

pack: clear
	tar -zcvf $(TOP_PATH)/../$(PROJECT_NAME).tar.gz ../$(PROJECT_NAME)

