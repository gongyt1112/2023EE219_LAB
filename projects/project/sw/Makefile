.PHONY: all run clean latest $(ALL)

ARCH=riscv64-mycpu
ALL=$(basename $(notdir $(shell find src/. -name "*.c")))
MAKEFILE_TEMPLATE="NAME = $*\nSRCS = $<\nLIBS += klib\ninclude $${AM_HOME}/Makefile"
# !!! if you want to ignore some warning, you can use the next macro !!!
# MAKEFILE_TEMPLATE="NAME = $*\nSRCS = $<\nLIBS += klib\nCFLAGS += -Wno-unused-variable\ninclude $${AM_HOME}/Makefile"

all: $(addprefix Makefile., $(ALL))
	echo "" $(ALL)

$(ALL): %: Makefile.%

Makefile.%: src/%.c latest
	/bin/echo -e ${MAKEFILE_TEMPLATE} > $@
	make -s -f $@ ARCH=$(ARCH) $(MAKECMDGOALS)
	rm -f Makefile.$*

run: all

clean:
	rm -rf Makefile.* build/
