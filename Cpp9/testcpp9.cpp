#include<sstream>
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <cmath>
int CheckDigit(const std::string& str)
{
	for(int i = 0; i < (int)str.size(); i++) {
		if (!std::isdigit(str[i]) && (i || (!i && str[i] != '-' && str[i] != '+')))
			return (0);
    }
	return(1);	
}

std::deque<int> parsing(char **av, int ac)
{
    int tmp;
    std::deque<int> array; //rename
    std::deque<std::string> args(av, av + ac -1);
    std::stringstream handler;
    // for(int i=0; i < ac-1; i++)
    //     std::cout << "zab " << args[i] <<'\n';
        
    for (std::deque<std::string> ::iterator it = args.begin(); it != args.end(); it++) {
        handler << *it;
        if (!CheckDigit(*it))
            throw std::runtime_error("Error: the argument should contain only digits");
        handler >> tmp;
        if (handler.fail())
            throw std::runtime_error("Error: overflow");
        if (tmp < 0)
            throw std::runtime_error("Error: negative number");
        array.push_back(tmp);
        handler.clear();
        // std::cout << "zab " << *it <<'\n';
    }
    return array;
}
int binarySearch(std::deque<int> arr, int l, int r, int x)
{
    int m;
    while (l <= r) {
        m = l + (r - l) / 2;
 
        // Check if x is present at mid
        // printf("arr = %d x = %d\n", arr[m], x);
        if (arr[m] == x)
            return m;
        // If x greater, ignore left half
        // if (arr[m] < x)
        //     l = m + 1;
        (arr[m] < x) ? l = m + 1 : r = m - 1;
 
        // If x is smaller, ignore right half
        // else
        //     r = m - 1;
    }
 
    // If we reach here, then element was not present
    return l;
}
// std::vector<int> JacobsthalOrder(int n)
// {
//     long jaco,j;// 2731; //1 3 5 11 21 43 85 171 341 683 1365 2731 5461 
//     // long c = 0;
//     std::vector<int> jacobs;
//     std::vector<int> order;
//     jacobs.push_back(1);
//     order.push_back(1);
//     for(int i = 2; i <= n; i++) {
//         // jaco = Jacobsthal(i);
//         jaco = (std::pow(2, i) + std::pow(-1, i - 1)) / 3; // Jacobsthal formula
//         // tmp = *--jacobs.end();
//             // std::cout << jaco << " ";
//         (n > jaco) &&  ( j = jaco);
//         (n <= jaco) &&  ( j = n);
//         while (j > *--jacobs.end())
//         {
//             order.push_back(j--);
//                 // c++;
//         }
//         if (jaco >= n)
//             break;
//         jacobs.push_back(jaco);
//         // if ( i == 5)
//         //     break;
//     }
//     // puts("");
//     // for(size_t i = 0; i < order.size(); i++)
//     //     std::cout << order[i] << " ";
//     return order;
//     // std::cout << "\nc = " <<c;
// }
double phi = (1 + std::sqrt(5)) / 2;

long long Jacobsthal(int n) 
{
    long jaco = (std::pow(2, n) + std::pow(-1, n - 1)) / 3;
    
    return jaco;
}

int main() {
    std::vector<int> as;
    as.reserve(10);

    as.insert(as.begin(), 10);
    as.insert(as.begin()+1, 0);
    as.insert(as.begin()+2, 0);
    as.insert(as.begin()+3, 0);
    as.insert(as.begin()+4, 0);
    as.insert(as.begin()+5, 0);
    as.insert(as.begin()+6, 0);
    as.insert(as.begin()+7, 0);
    as.insert(as.begin()+8, 0);
    as.insert(as.begin() + 9, 20);

    // printf("size = %lu capa %lu\n", as.size(), as.capacity());
    for(std::vector<int>::iterator it = as.begin(); it != as.end(); it++)
        std::cout << *it << " " ;
    return 0;
}
// int main(int ac, char **av) {

//     std::deque<int> as = parsing(av+1,ac); // Use std::deque

//     for (std::deque<int>::iterator itr = as.begin(); itr != as.end(); ++itr) {
//         std::cout << *itr << " ";
//     }
//     std::cout << std::endl;

//     std::deque<int> sortedDeque;
//     int binary = 0;
//     // sortedDeque.reserve(as.size());
//     for (std::deque<int>::iterator itr = as.begin(); itr != as.end(); ++itr) {
//         // printf("i = %lu  itr = %d size = %lu\n",i, *itr, sortedDeque.size());
//         printf(" binary = %d \n",binary);
//         // if (i == binary)
//         //     continue;
//         binary = binarySearch(sortedDeque, 0, itr - as.begin() -1, *itr);
//         sortedDeque.insert(sortedDeque.begin() + binary, *itr);
//     }

//     // sortedDeque.insert(sortedDeque.begin(), 7);
//     // sortedDeque.insert(sortedDeque.begin() + 5, 7);
//     // // Print the sorted container
//     for (size_t i = 0; i < sortedDeque.size(); i++) {
//         std::cout << sortedDeque.at(i) << " ";
//     }
//     // for (std::deque<int>::iterator itr = sortedDeque.begin(); itr != sortedDeque.end(); ++itr) {
//     //     std::cout << *itr << " ";
//     // }
//     std::cout << std::endl;

//     return 0;
// }
// int main()
// {
//     std::vector<int> v;

//     v=JacobsthalOrder(10);
//     for (size_t i = 0; i < v.size(); i++) {
//         std::cout << v.at(i) << " ";
//     }
// }