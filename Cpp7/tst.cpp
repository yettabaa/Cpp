#include "iostream"

float test(const float a, int b)
{
    return(a+b);
}

int main()
{
    // float (*ptr)(float, int) = test;
    // std::cout << test(4.5,5);
    int * a = new int();
    std::cout << *a <<"\n";
    // double i = (double)100;
    // if  (i < 100)
    //     printf("%d\n", i);
}
