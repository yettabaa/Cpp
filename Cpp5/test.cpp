#include <iostream>
// class zab
// {
//     int i;
// public:
    class test : public std::exception
    {
        // public:
        // virtual const char* what() const throw()
        // {
        //     return ("s[[]]");
        // }
    };
    // zab()
    // {
    //     i = 0;
    //     throw test();
    // }
// };

int main(int argc, char const *argv[])
{
    try
    {
        throw test(); 
    }
    catch (std::exception & e)
    {
        // std::cout << e.what() << std::endl;
        printf("==> %s\n", e.what());
    }
    return 0;
}
