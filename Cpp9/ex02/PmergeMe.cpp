/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:56 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/03 14:37:43 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sstream>
#include <cmath>

int CheckDigit(const std::string& str)
{
	for(int i = 0; i < (int)str.size(); i++) {
		if (!std::isdigit(str[i]) && (i || (!i && str[i] != '-' && str[i] != '+')))
			return (0);
    }
	return(1);	
}

v_int parsing(char **av, int ac)
{
    int tmp;
    v_int array; //rename
    string args(av, av + ac -1);
    std::stringstream handler;
    // for(int i=0; i < ac-1; i++)
    //     std::cout << "zab " << args[i] <<'\n';
        
    for (string::iterator it = args.begin(); it != args.end(); it++) {
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

void sortPair(std::pair <int, int> & pair)
{
    // std::vector<std::pair <int, int > >::iterator it pair;
    // int tmp;
    
    if (pair.first < pair.second)
    {
        std::swap(pair.first , pair.second);
        // tmp = pair.first;
        // pair.first = pair.second;
        // pair.second = tmp;
    }
}


std::vector<std::pair <int, int> > createPairs(const v_int& array, v_int& mainChain, v_int& pendingElements)
{
     // size_t size;

    // (array.size() % 2 == 0) && (size = array.size() / 2);
    // (array.size() % 2 != 0) && (size = array.size() / 2 + 1);
    std::vector<std::pair <int, int> > pairs(array.size() /2); //put -1 in the last case of odd
    std::cout << "size " << (array.size() / 2) <<"\n";
    for (std::vector<std::pair <int, int > >::iterator it = pairs.begin(); it != pairs.end(); it++) {
        // std::cout << "fisrt " << (it - pairs.begin()) *2 << " sec " << (it - pairs.begin()) *2 +1 << "\n";
        //     it->second = array[(it - pairs.begin()) *2 +1];
        // if (it == (pairs.end() -1) &&  array.size() % 2 != 0)
        //     it->first = -1;
        // else
        //     it->first = array[(it - pairs.begin()) *2];
        it->first = array[(it - pairs.begin()) *2];
        it->second = array[(it - pairs.begin()) *2 +1];
        // if (it == (pairs.end() -1) &&  array.size() % 2 != 0)
        //     it->second = -1;
        // else
        sortPair(pairs[it - pairs.begin()]); //the function can puted here
    }
    // for (std::vector<std::pair <int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++) {
    //     std::cout << it->first << " " << it->second << " ";
    // }
    // std::for_each(pairs.begin(), pairs.end(), &sortPair);
    std::sort(pairs.begin(), pairs.end());
    puts("");
    // v_int zab;
    for (std::vector<std::pair <int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++) {
        mainChain.push_back(it->first);
        pendingElements.push_back(it->second);
        if (it == (pairs.end() -1) &&  array.size() % 2 != 0)
            pendingElements.push_back(*--array.end());
        // std::cout << it->first << " " << it->second << " ";
    }
    // puts("");
    // for(size_t i =0; i < zab.size(); i++)
    //     std::cout << zab[i] << " ";
    return (pairs);
}

v_int JacobsthalOrder(int n)
{
    long jaco,j;// 2731; //1 3 5 11 21 43 85 171 341 683 1365 2731 5461 
    // long c = 0;
    std::vector<int> jacobs;
    std::vector<int> order;
    jacobs.push_back(1);
    order.push_back(1);
    for(int i = 2; i <= n; i++) {
        // jaco = Jacobsthal(i);
        jaco = (std::pow(2, i) + std::pow(-1, i - 1)) / 3; // Jacobsthal formula
        // tmp = *--jacobs.end();
            // std::cout << jaco << " ";
        (n > jaco) &&  ( j = jaco);
        (n <= jaco) &&  ( j = n);
        while (j > *--jacobs.end())
        {
            order.push_back(j--);
                // c++;
        }
        if (jaco >= n)
            break;
        jacobs.push_back(jaco);
        // if ( i == 5)
        //     break;
    }
    // puts("");
    // for(size_t i = 0; i < order.size(); i++)
    //     std::cout << order[i] << " ";
    return order;
    // std::cout << "\nc = " <<c;
}

v_int sort(const v_int& array)
{
    v_int mainChain, pendingElements;
    std::vector<std::pair <int, int> > pairs = createPairs(array, mainChain, pendingElements);
    v_int jacobsthalOrder = JacobsthalOrder((int)mainChain.size());
    
    std::cout << "mainChain:       ";
    for(size_t i = 0; i < mainChain.size(); i++)
        std::cout << mainChain[i] << " ";
    puts("");
    std::cout << "pendingElements: ";
    for(size_t i = 0; i < pendingElements.size(); i++)
        std::cout << pendingElements[i] << " ";
    puts("");
    std::vector<std::pair <int, int> >::iterator itPairs = pairs.begin();
    // for(itPairs = pairs.begin(); itPairs != pairs.end(); itPairs++) {
    for(size_t i = 0; i < pairs.size(); i++) {
        // if (!i)
        // {
        //     mainChain.insert(mainChain.begin(), pendingElements[0]);
        //     continue;
        // }
        int order = jacobsthalOrder[i] - 1; //when you subtract the iterator the operator - give you the number of element / how that the substraction substract the adress and divis the resulte by sizeof(type)
            // std::cout << order << " ";
        // puts("");
        for (v_int::iterator it = mainChain.begin(); it != mainChain.end(); it++)
        {
            // std::cout <<  (itPairs + order)->first << " ";
            printf ("fir=  %d ord = %d pend = %d it = %d\n", (itPairs + order)->first, order, pendingElements[order], *it);
            if (pendingElements[order] < *it) {
                
                printf ("zpend = %d\n",  pendingElements[order]);
                mainChain.insert(it , pendingElements[order]);
                break;
            }
        }
        
        // mainChain.insert(mainChain.begin(), pendingElements[*it - 1]);
    }
    if (array.size() % 2 != 0)
        mainChain.push_back(*--pendingElements.end());
    puts("");
    // for(v_int::iterator it = jacobsthalOrder.begin(); it != jacobsthalOrder.end(); it++){
    //     for (v_int::iterator it = mainChain.begin(); it != mainChain; it++)
    //     {
    //         /* code */
    //     }
        
    //     mainChain.insert(mainChain.begin(), pendingElements[*it - 1]);
    // }
    return mainChain;
}