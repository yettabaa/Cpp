#include <string>
#include <iostream>
#include<iomanip>

#include <sstream>
#include <string>



const int fract = 8;

inline float fixed_to_float(int fixed_p)
{
    return ((float)fixed_p / (float)(1 << fract));
}

inline int double_to_fixed(double input)
{
    return (int)(round(input * (1 << fract)));
}

int main()
{
    int x = 10;
 int  &y = 20;
    // float a= 5.3;
    // float b= 0.0;
    // printf("%f\n", a/b);
    // printf("%d\n", 1337 << 8);
    // printf("%d\n", 1337 * 256);
    // printf("%f\n", 1234.4321f);
    std::cout << fixed_to_float(10 << 8) << std::endl;
    // std::cout << double_to_fixed(42.42) << std::endl;
}