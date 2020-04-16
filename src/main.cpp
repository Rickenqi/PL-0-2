#include <iostream>
#include <fstream>
#include "variables.h"
using namespace std;

int main(int argc, char *argv[]){
    string filename = argv[1];
    input_file(filename);
    output_file(filename);
    return 0;
}