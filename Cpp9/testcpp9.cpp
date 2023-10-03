#include <iostream>
#include <vector>


int main()
{
    int tab[] = {4,5,3};
    std::vector<int> as (tab, tab + (sizeof(tab)/ sizeof(int)));
    for ( std::vector<int>::iterator itr = as.begin(); itr != as.end(); itr++) {
        // printf ("%d\n" , itr); 
        if (itr - as.begin() == 1)
            as.insert(itr, 50);
        // std::cout  << itr - as.begin() << " ";
    }

    for(size_t i = 0; i < as.size(); i++) {

        std::cout  << as[i] << " ";
    }
}