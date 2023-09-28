#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <stack>
#include <deque>
int main()
{
    int tab[] = {4,5,3};
    std::vector<int> as (tab, tab + (sizeof(tab)/ sizeof(int)));
    std::vector<int>::iterator itr;
    // std::cout << "size = "<< as.size() << '\n';
    // as.insert(as.end(), 7);
    // as.insert(as.end(), 7);
    // as.insert(as.end(), 7);
    // as.insert(as.end(), 7); 
    // std::cout << "capa = " << as.capacity() << '\n';
    // std::cout << "size = " << as.size() << '\n';
    for (itr = as.begin(); itr < as.end(); itr++)
        std::cout << itr.current() << ' ';
    // puts("");    
    // as.erase(as.begin());
    // std::cout << "size = " << as.size() << '\n';
    // std::cout << "capa = " << as.capacity() << '\n';
    // for (itr = as.begin(); itr < as.end(); itr++)
    //     std::cout << *itr << ' ';
    // puts("");    
    // int tab2[] = {4,5,3};
    // std::vector<int> as2(tab2, tab2 + (sizeof(tab2)/ sizeof(int)));
    // as.insert(as.end() , as2.begin(), as2.end());
    // for (itr = as.begin(); itr < as.end(); itr++)
    //     std::cout << *itr << ' ';
    // puts("");    
    // std::vector<int> as3;
    // as3 = as;
    // for (itr = as3.begin(); itr < as3.end(); itr++)
    //     std::cout << *itr << ' ';
    std::stack <int> test;

    test.push(45);
    test.push(454);
    test.push(100);
    test.push(500);
    test.top();
    std::cout << test.top() <<'\n';
    // std::cout << test.c.begin() <<'\n';

    // std::stack<int>::iterator as

    // std::vector<int>::iterator ts;
}