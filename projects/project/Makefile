TOP_PATH=$(shell pwd)
export AM_HOME=$(TOP_PATH)/sw/libraries/abstract-machine
# =====================================
# You can modify the code here
# =====================================
# Instruction
CFILE=hello-str
# Data-Image
DATA=data
# Save-File-Name
SAVE=save
# SIM-TIME
SIM_TIME=1000000000
HALF_CYCLE=1
# =====================================
# DO NOT Modify the below code
# =====================================
INST_FOLDER:=$(TOP_PATH)/sw/build/
DATA_FOLDER:=$(TOP_PATH)/data/bin/

PROJECT_NAME=$(notdir $(CURDIR:%/=%))
PROJECT_SRC=$(PROJECT_NAME)/hw

IMG_SUFFIX=-riscv64-mycpu
IMG=$(CFILE)$(IMG_SUFFIX)
INST_FILE:=$(IMG).bin 
INST_FULLPATH:=$(INST_FOLDER)$(INST_FILE)

DATA_FULLPATH:=$(DATA_FOLDER)$(DATA).bin 
SAVE_FULLPATH:=$(DATA_FOLDER)$(SAVE).bin 

define remove_dir
if [ -d "$(1)" ]; then rm -r $(1); fi
endef

define test_func
if [ -d "$(1)" ]; then echo $(1); fi
endef

define remove_file
if [ -f "$(1)" ]; then rm $(1); fi
endef

define mkdir_if_not_exist
	@if [ ! -d $(1) ]; then \
		echo "Creating directory $(1)"; \
		mkdir $(1); \
	fi
endef

model: 
	@$(call mkdir_if_not_exist,./data)
	@$(call mkdir_if_not_exist,./data/bin)
	@$(call mkdir_if_not_exist,./data/npy)
	cd ./tool && python model.py

compile:
	$(MAKE) -C ./sw ARCH=riscv64-mycpu ALL=$(CFILE)

build:
	./hw/build.sh -b 

sim: build model compile
	./hw/build.sh -s -a "$(INST_FULLPATH) $(IMG_PULLPATH) $(DATA_FULLPATH) $(SAVE_FULLPATH) $(SIM_TIME) $(HALF_CYCLE)"

run: sim
	@echo Done

pack:
	tar -zcvf $(TOP_PATH)/../$(PROJECT_NAME).tar.gz ../$(PROJECT_NAME)

clean_hw:
	@$(call remove_file,./hw/build/emu)
	@$(call remove_dir,./hw/build/emu-compile)
clear_hw:
	@$(call remove_dir,./hw/build)

clean_sw:
	@$(call remove_dir,./sw/build)
clear_sw: clean_sw
	@$(eval SW_BUILD_DIR := $(shell find ./sw -mindepth 2 -name build))
	@$(foreach dir,$(SW_BUILD_DIR),$(call remove_dir,$(dir));)
	@$(eval SW_MAKEFILE_PATH := $(shell find ./sw -maxdepth 2 -type f -name "Makefile.*"))
	@$(foreach path,$(SW_MAKEFILE_PATH),$(call remove_file,$(path));)

clean_model:
	@$(call remove_dir,./data)
clear_model: clean_model
	@$(call remove_dir,./tool/__pycache__)

clean: clean_hw clean_sw clean_model

clear: clear_hw clear_sw clear_model