/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binarySearch.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:28:54 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/04 19:14:42 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BINARYSEARCH_HPP
#define BINARYSEARCH_HPP
#include <iostream>
// #include

template <typename T> int binarySearch(T& array,  int l, int r, int x)
{
    int m;
    while (l <= r) {
        m = l + (r - l) / 2;
 
        // Check if x is present at mid
        // printf("arr = %d x = %d\n", arr[m], x);
        if (array[m] == x)
            return m;
        // If x greater, ignore left half
        // if (array[m] < x)
        //     l = m + 1;
        (array[m] < x) ? l = m + 1 : r = m - 1;
 
        // If x is smaller, ignore right half
        // else
        //     r = m - 1;
    }
 
    // If we reach here, then element was not present
    return l;
}
template <typename T> void binaryInsert(T& array)
{
    typename T::iterator itr = array.begin(); 
    // for(size_t i = 0; i < array.size(); i++) {
    //     std::cout  << array[i] << " ";
    // }
    // puts("");
    // puts("");
    // puts("");
    for ( size_t i=0; i < array.size(); i++) {
        // printf ("%d\n" , itr);
        // int pos = itr - array.begin();
        size_t binary = binarySearch<T>(array, 0, i, *(itr + i));
        if (binary == i)
            continue;
        int tmp = *(itr + i);
        // printf("i = %lu, itr = %d, binary = %d\n", i, *(itr + i), binary);
        array.erase(itr + i);
        array.insert((itr + binary), tmp);
        // for(size_t i = 0; i < array.size(); i++) {
        //     std::cout  << array[i] << " ";
        // }
        // puts("");
        // puts("");
    }
}
template <typename P> int binarySearchPairs(P& pairs, int l, int r, int x)
{
    int m;
    typename P::iterator it = pairs.begin();
    while (l <= r) 
    {
        m = l + (r - l) / 2;
 
        if ((it + m)->first == x)
            return m;

        ((it + m)->first < x) ? l = m + 1 : r = m - 1;

    }
 
    // If we reach here, then element was not present
    return l;
}
template < typename P>  void binaryInsertPairs(P& pairs)
{
    typename P::iterator  itr = pairs.begin(); 
    // std::pair <int, int> tmp;
    // for(size_t i = 0; i < pairs.size(); i++) {
    //     std::cout  << pairs[i] << " ";
    // }
    // puts("");
    // puts("");
    // puts("");
    for ( size_t i=0; i < pairs.size(); i++) {
        // printf ("%d\n" , itr);
        // int pos = itr - pairs.begin();
        puts("dsdsd");
        size_t binary = binarySearchPairs<P>(pairs, 0, i, (itr + i)->first);
        if (binary == i)
            continue;
        std::pair <int, int> tmp((itr + i)->first, (itr + i)->second);
        printf("i = %lu, itr = %d, binary = %lu\n", i, (itr + i)->first, binary);
        pairs.erase(itr + i);
        pairs.insert((itr + binary), tmp);
        for(typename P::iterator it = pairs.begin(); it != pairs.end(); it++) {
            std::cout << it->first << " " << it->second << " ";
        }
        puts("");
        puts("");
    }
}

#endif