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
double jacob(int n)
{
    return ((pow(2, n) - pow(-1, n)) / 3);
}
// int jacobsthal(int n) {
//     // First base case
//     if (n == 0) {
//         return 0;
//     }

//     // Second base case
//     if (n == 1) {
//         return 1;
//     }

//     // Recurse
//     return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
// }
// #include <cmath>
// int jacobsthal(int n) {
//     double numerator = std::pow(2, n) + std::pow(-1, n - 1);
//     double result = numerator / 3.0;
//     return static_cast<int>(std::round(result));
// }
// #include <vector>
// #include <deque>
// int main()
// {
//     // int tab1[10] = {4,1,2,5,4,10,11,20,90,7};
//     // std::vector<int> vec(tab1, tab1 + (sizeof(tab1) / sizeof(int)));
//     // std::deque<int> deq(vec.begin(), vec.end());

//     // for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
//     //     std::cout << *it << " ";

//         // test <std::vector<int>>(tab1, (sizeof(tab1) / sizeof(int)));

//     for (int i = 0; i < 4;i++)
//         std::cout << jacobsthal(i) << " ";

//     // std::cout << convertDateToSeconds("2000-12-2") <<'\n';
//     // std::cout << convertDateToSeconds("2000-12-1") <<'\n';
//     // std::cout << sizeof(std::time_t) << '\n';

    
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

// // Function to convert a function to a comparator
// std::function<int(int, int)> fnToComparator(std::function<int(int, int)> f) {
//     if (f == std::less<int>()) {
//         return std::less<int>();
//     }
//     return [f](int x, int y) {
//         int r = f(x, y);
//         if (std::is_integral<decltype(r)>::value) {
//             return r;
//         }
//         if (r) {
//             return -1;
//         }
//         if (f(y, x)) {
//             return 1;
//         }
//         return 0;
//     };
// }

// Function to calculate the nth Jacobsthal number (0-indexed)
int Jacobsthal(int n) {
    return std::round((std::pow(2, n) + std::pow(-1, n - 1)) / 3);
}

// Function to calculate indexes to insert 'b's at, given 'n' to insert (0-indexed)
int main()
{
    //find a readble way
    long jaco,j, n = 10;
    long c = 0;
    std::vector<int> jacobs;
    std::vector<int> order;
    jacobs.push_back(1);
    order.push_back(1);
    for(int i = 2; i <= n; i++) {
        jaco = Jacobsthal(i);
        // tmp = *--jacobs.end();
            std::cout << jaco << " ";
        for (j = jaco;j > *--jacobs.end(); j--)
        {
            // std::cout << "j= " << j <<" ";
            if (j <= n)
                order.push_back(j);
                c++;
        }
        if (jaco >= n)
            break;
        jacobs.push_back(jaco);
        // if ( i == 5)
        //     break;
    }
    puts("");
    for(int i = 0; i < order.size(); i++)
        std::cout << order[i] << " ";
    std::cout << "\nc = " <<c;
}

