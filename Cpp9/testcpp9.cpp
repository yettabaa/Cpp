
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
int main()
{
    std::map<std::string, double> map;
    std::map<std::string, double>::iterator it;
    

    map["test"] = 48;
    map["test"] = 45;
    map["test"] = 41;
    map["test1"] = 4;

    // std::cout << map["test"] <<'\n';
    // std::cout << map["test"] <<'\n';
    for (it = map.begin(); it != map.end(); it++)
        std::cout << it->first << ' ' << it->second<<'\n';

    
}