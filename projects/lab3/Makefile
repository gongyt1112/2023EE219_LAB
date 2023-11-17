W = 8
H = 8
K = 8
C = 3
W_SIZE = 3
DEBUG = 0

all: test

memory:
	python3 ./scripts/generate_mem.py $(W) $(H) $(K) $(C) $(W_SIZE) $(DEBUG)

test: sim
	python3 ./scripts/test.py $(W) $(H) $(K) $(C) $(W_SIZE)

sim: memory
	./../../build.sh -e lab3 -b
	./../../build.sh -e lab3 -s

clean:
	./../../build.sh -e lab3 -c
	if [ -f "mem/mem_init.txt" ]; then rm -rf mem/mem_init.txt; fi
	if [ -f "mem/mem_out.txt" ]; then rm -rf mem/mem_out.txt; fi

