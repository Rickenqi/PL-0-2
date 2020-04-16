#include "variables.h"
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
        string filename = argv[1];
        cout << filename << endl;
        input_file(filename);
        output_file(filename);
        return 0;
}