/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:56 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/04 19:06:46 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sstream>
#include <cmath>
#include <vector>
#include <deque>

int CheckDigit(const std::string& str)
{
	for(int i = 0; i < (int)str.size(); i++) {
		if (!std::isdigit(str[i]) && (i || (!i && str[i] != '-' && str[i] != '+')))
			return (0);
    }
	return(1);	
}

template <typename T, typename S>
T parsing(char **av, int ac)
{
    int tmp;
    T array; //rename
    S args(av, av + ac -1);
    std::stringstream handler;
    // for(int i=0; i < ac-1; i++)
    //     std::cout << "zab " << args[i] <<'\n';
        
    for (typename S::iterator it = args.begin(); it != args.end(); it++) {
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
// template <typename T>
// int binarySearch(T arr, int l, int r, int x)
// {
//     int m;
//     while (l <= r) {
//         m = l + (r - l) / 2;
 
//         // Check if x is present at mid
//         // printf("arr = %d x = %d\n", arr[m], x);
//         if (arr[m] == x)
//             return m;
//         // If x greater, ignore left half
//         // if (arr[m] < x)
//         //     l = m + 1;
//         (arr[m] < x) ? l = m + 1 : r = m - 1;
 
//         // If x is smaller, ignore right half
//         // else
//         //     r = m - 1;
//     }
 
//     // If we reach here, then element was not present
//     return l;
// }
// template <typename T>
// void binaryInsert(T& array) {
//     typename T::iterator itr = array.begin(); 
//     // for(size_t i = 0; i < array.size(); i++) {
//     //     std::cout  << array[i] << " ";
//     // }
//     // puts("");
//     // puts("");
//     // puts("");
//     for ( size_t i=0; i < array.size(); i++) {
//         // printf ("%d\n" , itr);
//         // int pos = itr - array.begin();
//         size_t binary = binarySearch<T>(array, 0, i, *(itr + i));
//         if (binary == i)
//             continue;
//         int tmp = *(itr + i);
//         // printf("i = %lu, itr = %d, binary = %d\n", i, *(itr + i), binary);
//         array.erase(itr + i);
//         array.insert((itr + binary), tmp);
//         // for(size_t i = 0; i < array.size(); i++) {
//         //     std::cout  << array[i] << " ";
//         // }
//         // puts("");
//         // puts("");
//     }
// }

void test(char **av, int ac)
{
    clock_t start_time, end_time;
    // v_int array = parsing(av, ac);
    // std::vector<int>  array = parsing<std::vector<int>, std::vector<std::string> >(av, ac);
    // PmergeMe<std::vector<int>, std::vector<std::pair <int, int> > > vect(array);
    std::deque<int> array1 = parsing<std::deque<int>, std::deque<std::string> >(av, ac);
    PmergeMe<std::deque<int>, std::deque<std::pair <int, int> > > deq(array1);
    
    // start_time = clock();
    // vect.sort();
    // end_time = clock();
    // vect.print();
    // double elapsed_time1 = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    // std::cout << "Elapsed time: " << elapsed_time1 << " seconds." << std::endl;
    
    start_time = clock();
    deq.sort();
    end_time = clock();
    deq.print();
    double elapsed_time1 = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    std::cout << "Elapsed time: " << elapsed_time1 << " seconds." << std::endl;   
}