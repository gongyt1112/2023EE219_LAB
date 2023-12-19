
//rvcpu-test.cpp
#include <verilated.h>          
#include <verilated_vcd_c.h>    
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <iomanip>
#include "ram.h"
#include "Vtop.h"

using namespace std;

// #define DUMP_WAVE_ENABLE
#define SAVE_DATA_ENABLE

#define ADDR_BASE		0x80000000
#define ADDR_INST		0x80000000
#define ADDR_DATA		0x80800000

static Vtop* top;
static VerilatedVcdC* tfp;
static vluint64_t main_time = 0;
// static const vluint64_t sim_time = 100000000;

const char* get_color_code(const char* color_name) {
    if (strcmp(color_name, "red") == 0 || strcmp(color_name, "r") == 0) return "31"; 
    if (strcmp(color_name, "green") == 0 || strcmp(color_name, "g") == 0) return "32"; 
    if (strcmp(color_name, "yellow") == 0 || strcmp(color_name, "y") == 0) return "33"; 
    if (strcmp(color_name, "blue") == 0 || strcmp(color_name, "b") == 0) return "34";
    if (strcmp(color_name, "magenta") == 0 || strcmp(color_name, "m") == 0) return "35"; 
    if (strcmp(color_name, "cyan") == 0 || strcmp(color_name, "c") == 0) return "36";
    return "0";  
}

void color_printf(const char* color_name, const char* format, ...) {
    va_list args;
    const char* color_code = get_color_code(color_name);
    printf("\033[%sm", color_code);
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("\033[0m");
}

int main(int argc, char **argv)
{
	char default_path_inst[] = "../../data/bin/hello-str-riscv64-mycpu.bin" ;
	char default_path_data[] = "../../data/bin/data.bin" ;
	char default_path_save[] = "./save.dat";

	char *path_inst ;
	char *path_data ;
	char *path_save ;
	vluint64_t sim_time ;
	int half_cycle ;
	if (argc != 6){
		printf("\033[31mERROR: No binary file\033[0m\n");
		path_inst = default_path_inst ;
		path_data = default_path_data ;
		path_save = default_path_save ;
		sim_time  = 100000000 ;
		half_cycle = 1 ;
	}else{
		path_inst = argv[1] ;
		path_data = argv[2] ;
		path_save = argv[3] ;
		sim_time = std::stoull(argv[4]);
		half_cycle = std::stoull(argv[5]);
	}
	color_printf( "red", "Max-Run-Cycles = %d\n", sim_time/(half_cycle*2) );

	printf("Initialing RAM ...\n");
    init_ram(path_inst);
	printf("\033[32mInitial RAM done !!!\033[0m\n");

	printf("Initialing Data ...\n");
	load_data(ADDR_DATA, path_data );
	printf("\033[32mLoad Data done !!!\033[0m\n");

  	// Verilated::commandArgs(argc, argv);
	top = new Vtop;

#ifdef DUMP_WAVE_ENABLE
	Verilated::traceEverOn(true);
  	tfp = new VerilatedVcdC;
	top->trace(tfp, 0);
  	tfp->open("top.vcd");
#endif

	printf("\033[34mThe program is running now......\033[0m\n");
	printf("----------------------------------------------------------\n");
	while( !Verilated::gotFinish() && main_time < sim_time ){
		if( main_time % (half_cycle*2) == 0 ) top->clock = 0;
		if( main_time % (half_cycle*2) == half_cycle ) top->clock = 1;
		if( main_time < (half_cycle*2) ) {
			top->reset = 1;
		} else {
			top->reset = 0;
		}
		top->eval();
	#ifdef DUMP_WAVE_ENABLE
		tfp->dump(main_time);
	#endif 
		main_time++;
	}
	std::cout << std::endl;
	printf("----------------------------------------------------------\n");
	printf("\033[34mThe program finished after \033[35m%ld\033[34m cycles.\033[0m \n", main_time/(half_cycle*2));
	if( main_time >= sim_time ) {
		color_printf( "red", "The sim time is too short !!!\nYOU MUST MODIFY THE VARIABLE sim_time in ./hw/csrc/main.cpp !!!\n" ) ;
	}

#ifdef SAVE_DATA_ENABLE
	printf( "Save the data into file %s\n", path_save );
	save_data( ADDR_DATA, path_save);
#endif

#ifdef DUMP_WAVE_ENABLE
	tfp->close();
	delete tfp;
#endif 
	delete top;
	ram_finish();
	exit(0);
	return 0;
}
