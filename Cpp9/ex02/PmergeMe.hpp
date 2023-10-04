/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:55 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/04 18:42:05 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
//when you subtract the iterator the operator - give you the number of element / how that the substraction substract the adress and divis the resulte by sizeof(type)
#include <iostream>

#include <cmath>
#include "binarySearch.hpp"
// typedef std::vector<std::string> string;
// typedef std::vector<int> v_int;

// v_int parsing(char **av, int ac);
// v_int sort(const v_int& array);
void test(char **av, int ac); //check if is sorted

template <typename T, typename P>
class PmergeMe
{
private:
    T array;
    P pairs;
    T mainChain;
    T insert;
    T jacobsthalOrder;
public:
    PmergeMe(const T& array); // chage the parsing to templaete function
    ~PmergeMe();
    void createPairs(void);
    void JacobsthalOrder(int n);
    void sort(void);
    void print(void);
    // int binarySearch(int left, int right, int search)
    // void get();
};
#include "PmergeMe.tpp"



#endif