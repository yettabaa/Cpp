#include <string>
#include <iostream>
#include<iomanip>
#include<strstream>
#include <sstream>
#include <string>
class PhoneBook
{

};

class Contact
{
private:
    std::string infos;
public:
    int i;
    void add()
    {
        std::cout << "first name: " << std::flush;
        std::cin >> infos;
        std::cout << "last name: " << std::flush;
        std::cin >> infos;
        std::cout << "nickname: " << std::flush;
        std::cin >> infos;
        std::cout << "phone number: " << std::flush;
        std::cin >> infos;
        std::cout << "darkest secret: " << std::flush;
        std::cin >> infos;
        // std::cout << getline();
        std::cout << infos;
    }
};
std::string trim(std::string str, std::string str1)
{
    size_t i = 0;
    size_t j = str.length();

    if (!str[0])
        return (str = "", str);
    while (str[i] && !str1.find(str[i++]))
        ;
    while (--j && !str1.find(str[j]))
        ;
    (j +2 < i) && (j = 0);
    (j +2 >= i) && (j = j +2 - i);
    str = str.substr(i -1, j);
    
    return (str);
}
int main()
{
    int i;
    Contact s;
    // std::string str;
    // str = test(str);
    // std::cout << str;

    std::cout << trim("       ", " ") << std::endl; 
    
}