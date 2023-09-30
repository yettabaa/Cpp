#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <ctime>

std::time_t convertDateToSeconds(const std::string& str) 
{
    std::tm timeInfo = {};
    std::istringstream date(str);

    // Extract month, day, and year
    int month, day, year;
    char c;
    date >> year >> c >> month >> c >> day;
    // Set timeInfo components
    timeInfo.tm_year = year - 1900; // Years since 1900
    timeInfo.tm_mon = month - 1;    // Months are 0-11
    timeInfo.tm_mday = day;
    // Convert to time_t (seconds since epoch)
    return std::mktime(&timeInfo);
}

int main()
{
    // std::map<std::time_t, double> map;
    // std::map<std::string, double>::iterator it;
    
    // std::time_t sec; 

    // map["test"] = 48;
    // map["test"] = 45;
    // map["test"] = 41;
    // map["test1"] = 4;

    // // std::cout << map["test"] <<'\n';
    // // std::cout << map["test"] <<'\n';
    // for (it = map.begin(); it != map.end(); it++)
    //     std::cout << it->first << ' ' << it->second<<'\n';

    std::cout << convertDateToSeconds("2000-12-2") <<'\n';
    std::cout << convertDateToSeconds("2000-12-1") <<'\n';
    std::cout << sizeof(std::time_t) << '\n';
    
}