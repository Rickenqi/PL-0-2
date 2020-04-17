#include "variables.h"
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string filename = argv[1];
    input_file(filename);
    for (auto& c : content) {
        cout << c << endl;
    }
    output_file(filename);
    return 0;
}