import getopt
import sys

def read_matrix_from_txt(path):
    matrix = []
    with open(path,'r') as f:
        str_lines = f.readlines()

        for the_line in str_lines:
            line = []
            list_line = the_line.replace("\n",'').split("\t")
            for i in list_line:
                i = i.replace(" ",'')
                if (i!=''):
                    line.append( int(i) )
            if len(line) > 0:            
                matrix.append(line)

    return matrix

def show_matrix(mat):
    the_row = len(mat)
    the_col = len(mat[0])
    context = ""
    for i in range(the_row):
        for j in range(the_col):
            context += ("{:10}".format( mat[i][j] ))
        context += ("\n")    
    print(context)


