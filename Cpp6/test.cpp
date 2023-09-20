#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>

void f()
{
    system("leaks a.out");
}

int main()
{
    // int j;
    // std::stringstream zab("nan");
    // // std::string str = "1.0";
    // // zab << "9999999999999990";
    // // zab >> j;
    // // printf("%d\n", j);
    // // printf("%d\n", std::atoi("999999999999"));

    // double i[] = {4.1, 4.1};
    // double j;

    // zab >> i;
    // // std::cout << std::fixed << std::setprecision(5);
    // // printf("%f\n", std::fmod(i, static_cast<int>(i)));
    // // std::cout << i <<std::endl;
    // // std::cout << i <<std::endl;
    // // std::cout << i <<std::endl;
    
    // printf("%d\n", static_cast<int> (i));
    // printf("%f\n", static_cast<float> (i));
    // printf("%f\n", static_cast<double> (i));
    // std::cout << "cout  " << static_cast<int> (i) << std::endl;
    // std::cout << "cout  " << static_cast<float> (i) << std::endl;
    // std::cout << "cout  " << static_cast<double> (i) << std::endl;
    // // std::cout << static_cast<double> (atof(str.c_str())) <<std::endl;;
    // return 0;
    // int *c = new(int);
    // std::string str = "dfdfd";
    // std::string str1 = str.substr(0, 2);
    // printf("==>  %d\n", dynamic_cast < *  >(i));
    // atexit(f);
    // while (1)
    // {
    //     /* code */
    // }
    // float intValue = 424;

    // // C-style casting between unrelated pointer types (may succeed)
    // int* intPtr1 = (int*)&intValue;

    // // reinterpret_cast between unrelated pointer types (likely to fail)
    // int* intPtr2 = reinterpret_cast<int*>(&intValue);

    // std::cout << "*intPtr1: " << *intPtr1 << std::endl; // May produce a valid result (implementation-dependent)
    // std::cout << "*intPtr2: " << *intPtr2 << std::endl; // M
    int intValue = 42;

    // C-style casting between unrelated pointer types (may succeed)
    double* doublePtr1 = (double*)&intValue;

    // reinterpret_cast between unrelated pointer types (likely to fail)
    double* doublePtr2 = reinterpret_cast<double*>(&intValue);

    std::cout << "*doublePtr1: " << *doublePtr1 << std::endl; // May produce a valid result (implementation-dependent)
    std::cout << "*doublePtr2: " << *doublePtr2 << std::endl; // M
    
}
// #include "utils.hpp"

