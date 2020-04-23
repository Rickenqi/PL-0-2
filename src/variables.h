#ifndef PL_0_2_VARIABLES_H
#define PL_0_2_VARIABLES_H
#include <list>
#include <string>
#include <vector>
#include <map>
#include<regex>
#include<set>
using std::string;
extern std::map<string,string> encoder;
extern std::set<char> ender;
extern std::vector<string> content;
extern std::vector<std::pair<string, string>> total;
void input_file(string filename);
void output_file(string filename);
void init();
#endif //PL_0_2_VARIABLES_H
