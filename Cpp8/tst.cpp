#include <iostream>
#include <vector>
#include <iterator>
int main()
{
    int tab[] = {4,5,3};
    std::vector<int> as (tab, tab + (sizeof(tab)/ sizeof(int)));
    std::vector<int>::iterator itr;
    std::cout << "size = "<< as.size() << '\n';
    as.insert(as.end(), 7);
    as.insert(as.end(), 7);
    as.insert(as.end(), 7);
    as.insert(as.end(), 7);
    std::cout << "capa = " << as.capacity() << '\n';
    std::cout << "size = " << as.size() << '\n';
    for (itr = as.begin(); itr < as.end(); itr++)
        std::cout << *itr << ' ';
    puts("");    
    as.erase(as.begin());
    std::cout << "size = " << as.size() << '\n';
    std::cout << "capa = " << as.capacity() << '\n';
    for (itr = as.begin(); itr < as.end(); itr++)
        std::cout << *itr << ' ';
    puts("");    
    int tab2[] = {4,5,3};
    std::vector<int> as2(tab2, tab2 + (sizeof(tab2)/ sizeof(int)));
    as.insert(as.end() , as2.begin(), as2.end());
    for (itr = as.begin(); itr < as.end(); itr++)
        std::cout << *itr << ' ';

    // std::vector<int>::iterator ts;
}