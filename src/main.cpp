#include "variables.h"
#include <fstream>
#include <iostream>
using namespace std;

void deal(string &line)
{
    // 正则符，分别匹配数字和标识符
    regex number("[0-9]+"),identifier("[a-z]([a-z]|[0-9])*");
    string cur;
    // 每次记录终结符之间的字符，在第二个终结符出现时进行处理
    for(int i=0;i<line.length();++i)
    {
        if(line[i]==' '||ender.count(line[i])) // 在终结符处进行处理
        {
            // 分别处理关键字，标识符，数字
            if(cur.length() && encoder.count(cur))
                total.emplace_back(encoder[cur],cur);
            else if(cur.length() && regex_match(cur,identifier))
                total.emplace_back("ident",cur);
            else if(cur.length() && regex_match(cur,number))
                total.emplace_back("number",cur);
            else if(cur.length())
            {
                cout << "error occur: " << cur;
            }
            // 处理完毕，清空cur
            cur="";
            // 处理运算符（终结符）
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
        // 非终结符记录当前字符
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
