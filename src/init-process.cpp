#include "variables.h"
#include <iostream>
using namespace std;

string decode[31] = { "begin", "call", "const", "do", "end", "if", "odd", "procedure", "read", "then", "var", "while",
                      "write", "identifier", "number", "+", "-", "*", "/", "=", "#", "<", "<=", ">", ">=", ":=",
                      "(", ")", ",", ";", "." };
string encode[31] = { "beginsym", "callsym", "constsym", "dosym", "endsym", "ifsym", "oddsym", "proceduresym", "readsym",
                      "thensym", "varsym", "whilesym", "writesym", "ident", "number", "plus", "minus", "times", "slash",
                      "eql", "neq", "lss", "leq", "gtr", "geq", "becomes", "lparen", "rparen", "comma", "semicolon", "period" };

map<string, string> encoder;
set<char> ender;

void init() {
    for (int i = 0; i < 31; ++i) {
        encoder.insert(pair<string,string>(decode[i], encode[i]));
        // cout << decode[i] << " " << encoder[decode[i]] << endl;
    }
    ender.insert('+');
    ender.insert('-');
    ender.insert('*');
    ender.insert('/');
    ender.insert(':');
    ender.insert('=');
    ender.insert('#');
    ender.insert('>');
    ender.insert('<');
    ender.insert('(');
    ender.insert(')');
    ender.insert(',');
    ender.insert(';');
    ender.insert('.');
}
