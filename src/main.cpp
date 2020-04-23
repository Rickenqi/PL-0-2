#include "variables.h"
#include <fstream>
#include <iostream>
using namespace std;

void deal(string &line)
{
    regex number("[0-9]+"),identifier("[a-z]([a-z]|[0-9])*");
    string cur;
    for(int i=0;i<line.length();++i)
    {
        if(line[i]==' '||ender.count(line[i]))
        {
            if(cur.length()&&encoder.count(cur))
                total.emplace_back(encoder[cur],cur);
            else if(cur.length()&&regex_match(cur,identifier))
                total.emplace_back("ident",cur);
            else if(cur.length()&&regex_match(cur,number))
                total.emplace_back("number",cur);
            else if(cur.length())
            {
                //total.emplace_back("error",cur);
            }
            cur="";
            if(line[i]!=' ')
            {
                string Ender;
                Ender+=line[i];
                if(i+1<line.length()&&encoder.count(Ender+line[i+1]))
                {
                    Ender+=line[i+1];
                    i++;
                }
                total.emplace_back(encoder[Ender],Ender);
            }
            continue;
        }
        cur+=line[i];
    }
}
int main(int argc, char *argv[])
{
    init();
    for(int i = 1; i < argc; i++) {
        string filename = argv[i];
        cout << "compiling the file: " << filename << endl;
        input_file(filename);
        for (auto &c : content) {
            deal(c);
            cout << c << endl;
        }
        output_file(filename);
    }
    return 0;
}
