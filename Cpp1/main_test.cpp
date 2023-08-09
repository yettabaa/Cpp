#include <string>
#include <iostream>
#include<iomanip>

#include <sstream>
#include <string>

void test( int &zab)
{
    zab = 5;
    std::cout << "zab => "<< zab << std::endl;
}
class Test
{
// private:    
public:
    int w;
    int b;
    Test(int a) : w(a) {}
    Test() : b(100){}
    void tab()
    {
        std::cout << "fhghhfgh" << std::endl;
    }
};
int main()
{
    Test z;
    int Test::*ptr = &Test::b;
    void (Test::*ptr1)() = &Test::tab;
    // const int j = 15;
    // int i = 12;
    // // std::cout << "av zab => " << i << std::endl;
    // // test(i);
    // std::cout <<  std::string::npos << std::endl;
    // printf("%d\n", i = 2);
    // Test zab;
    z.*ptr = 7;
    (z.*ptr1)();
    std::cout << "w " << z.*ptr << std::endl;
    // std::cout << "b " << zab.b << std::endl;



}