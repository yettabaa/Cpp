#include <iomanip>
#include <iostream>

class A
{
    int i;
    int j;
    void f()
    {
        int i;
        std::cout << "djg" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    // int *i = new int[4];
     float a = 13.5;
    // a << 8;
    int b = 13;
    b = b << 8;
    printf("%f    %d\n", a, b);

    
}
