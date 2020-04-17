#include "variables.h"
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    init();
    for(int i = 1; i < argc; i++) {
        string filename = argv[i];
        cout << "compiling the file: " << filename << endl;
        input_file(filename);
        for (auto &c : content) {
            // 在这里调用各种其他函数进行处理
            cout << c << endl;
        }
        output_file(filename);
    }
    return 0;
}