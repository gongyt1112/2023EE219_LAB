import string
import os
import sys
import getopt
from Common import *
from Instruction import *

def parse_asm_from_txt( file_path, issue_num=1 ):
    raw_text = read_file(file_path)
    
    label_dict = {}
    code_list = []
    code_map_dict = {}
    error_flag = False
    for index, line in enumerate(raw_text):
        current_index = len(code_list)
        # pre-process
        tmp = line.replace(" ","").replace("\t","")
        if(tmp[0]==';' or tmp[0]=='#'):
            continue
        tmp = line.replace(" ","").replace("\n","").replace(";","").replace("#","")
        if(tmp==''):
            continue
        # process labels
        if ':' in line and ';' not in line:
            label = line.replace(':', '').replace(' ', '').replace('\t', '').replace('\n', '')
            if label not in label_dict:
                label_dict[label] = current_index
                continue
            else:
                print("\033[31mERROR line {}\033[0m".format(index+1))
                print("Error Repeated Lable:\t{}".format(label))
                error_flag = True
                break
        # process instructions
        inst_list, annotation = split_inst_multi_issue(line, issue_num)
        the_inst_list = [ extract_inst(i) for i in inst_list ]
        code_list.append(the_inst_list)
        code_map_dict[current_index] = [index, line]
    # if error exists, exit
    assert error_flag==False, ValueError('ERROR')
    
    return label_dict, code_list, code_map_dict

def compile_inst_multi_issue( label_dict, code_list, code_map_dict, issue_num=1 ):
    multi_inst_list = [ [] for i in range(issue_num) ]
    error_flag = False
    for index, inst_list in enumerate(code_list):
        # print(inst_list)
        try:
            for issue_idx, the_inst in enumerate(inst_list):
                inst_bin = InstGen(the_inst, label_dict, index, issue_num)
                multi_inst_list[issue_idx].append( inst_bin )
        except:
            [error_index, error_line] = code_map_dict[index]
            print("\033[31mERROR line {}\033[0m\t{}".format(error_index+1, error_line))
            error_flag = True
    assert error_flag==False, ValueError('ERROR')
    return multi_inst_list

def dump_bin_for_multi_issue( multi_inst_list, export_path ):
    content = ""
    length = len(multi_inst_list[0])
    for idx in range(length):
        for l in multi_inst_list:
            content += l[idx]
    data_btyes = binstr2bytes( content )
    export_bin(export_path, data_btyes)

def debug_multi_issue( multi_inst_list, export_path ):
    content = ""
    length = len(multi_inst_list[0])
    for idx in range(length):
        for l in multi_inst_list:
            content += l[idx] + ';\t'
        content += '\n'
    with open( "./debug.txt", "w+" ) as f:
        f.write(content)

def compile_multi_issue( file_path, export_path, issue_num=1 ):
    label_dict, code_list, code_map_dict = parse_asm_from_txt( file_path, issue_num )
    print("Finish parsing asm files.")
    multi_inst_list = compile_inst_multi_issue( label_dict, code_list, code_map_dict, issue_num )
    # debug_multi_issue( multi_inst_list, "./debug.txt" )
    dump_bin_for_multi_issue( multi_inst_list, export_path )

def compile( file_path, export_path, issue_num=1 ):
    compile_multi_issue( file_path, export_path, issue_num )

def arg_handler():
    inputfile = ""
    outputfile = ""
    issue_num = 1
    try:
        argv = sys.argv[1:]
        opts, args = getopt.getopt( argv, "hi:o:n:",["ifile=", "ofile=", "issue_num="] )
    except getopt.GetoptError:
        print('python Compile.py -i <inputfile> -o <outputfile> -n <issue-num>')
        print('Example:')
        print("python Compile.py -i ../asm/demo.asm -o ../bin/demo.bin -n 1")
        sys.exit(2)
    
    for opt,arg in opts:
        if opt in ("-h", "--help"):
            print('python Compile.py -i <inputfile> -o <outputfile>  -n <issue-num>')
            print('Example:')
            print("python Compile.py -i ../asm/demo.asm ../bin/demo.bin -n 1")
            sys.exit()
        elif opt in ("-i", "--ifile"):
            inputfile = arg 
        elif opt in ("-o", "--ofile"):
            outputfile = arg 
        elif opt in ("-n", "--num"):
            issue_num = int(arg)
    
    return inputfile, outputfile, issue_num

if __name__== '__main__':
    inputfile, outputfile, issue_num = arg_handler()
    print( "inputfile={}, outputfile={}, issue_num={}".format( inputfile, outputfile, issue_num ) )
    compile(inputfile, outputfile, issue_num)