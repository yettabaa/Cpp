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
    printf("%lu\n", sizeof(A));

    
}
