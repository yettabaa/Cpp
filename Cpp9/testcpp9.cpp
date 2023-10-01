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

template <typename T> 
T test(int *tab, int size){
    T tzz(tab, tab + size);
    return(tzz);
}

#include <vector>
#include <deque>
int main()
{
    int tab1[10] = {4,1,2,5,4,10,11,20,90,7};
    std::vector<int> vec(tab1, tab1 + (sizeof(tab1) / sizeof(int)));
    std::deque<int> deq(vec.begin(), vec.end());

    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
        std::cout << *it << " ";

        // test <std::vector<int>>(tab1, (sizeof(tab1) / sizeof(int)));



    // std::cout << convertDateToSeconds("2000-12-2") <<'\n';
    // std::cout << convertDateToSeconds("2000-12-1") <<'\n';
    // std::cout << sizeof(std::time_t) << '\n';

    
}