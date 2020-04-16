#include <iostream>
#include <fstream>
#include <string>
#include "variables.h"
using namespace std;

void input_file(string filename){
    ifstream infile;
    infile.open(filename);
    string read;
    while (getline(infile,read)){
        content.push_back(read);
    }
    infile.close();
    cout << "the file has been read" << endl;
}

void output_file(string filename){
    ofstream outfile;
    int pos = filename.find('.');
    filename.insert(pos,"out");
    outfile.open(filename);
    for(auto & p : total) {
        outfile << "(" << p.first << ", " << p.second << ")" << endl;
    }
    outfile.close();
    cout << "the file has been written" << endl;
}