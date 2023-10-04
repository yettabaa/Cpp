/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:56 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/04 10:57:22 by yettabaa         ###   ########.fr       */
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

std::vector<std::pair <int, int> > createPairs(const v_int& array, v_int& mainChain, v_int& pendingElements)
{
    std::vector<std::pair <int, int> > pairs(array.size() /2);

    for (std::vector<std::pair <int, int > >::iterator it = pairs.begin(); it != pairs.end(); it++) {
        it->first = array[(it - pairs.begin()) *2];
        it->second = array[(it - pairs.begin()) *2 +1];
        if (it->first < it->second)
            std::swap(it->first , it->second);
    }
    std::sort(pairs.begin(), pairs.end());
    for (std::vector<std::pair <int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++) {
        mainChain.push_back(it->first);
        pendingElements.push_back(it->second);
        if (it == (pairs.end() -1) &&  array.size() % 2 != 0)
            pendingElements.push_back(*--array.end());
        // std::cout << it->first << " " << it->second << " ";
    }
    return (pairs);
}

v_int JacobsthalOrder(int n)
{
    // long c = 0;
    long jaco, j;// 2731; //1 3 5 11 21 43 85 171 341 683 1365 2731 5461 
    std::vector<int> jacobs;
    std::vector<int> order;
    
    jacobs.push_back(1);
    order.push_back(1);
    for(int i = 2; i <= n; i++) {
        jaco = (std::pow(2, i) + std::pow(-1, i - 1)) / 3; // Jacobsthal formula
        (n > jaco) &&  (j = jaco);
        (n <= jaco) &&  (j = n);
        while (j > *--jacobs.end())
            order.push_back(j--);
        if (jaco >= n)
            break;
        jacobs.push_back(jaco);
    }
    return order;
    // std::cout << "\nc = " <<c;
}

v_int sort(const v_int& array)
{
    v_int mainChain, insert;
    std::vector<std::pair <int, int> > pairs = createPairs(array, mainChain, insert);
    v_int jacobsthalOrder = JacobsthalOrder((int)mainChain.size());
    size_t order, size = insert.size();
    // int c = 0;
    
    // std::cout << "mainChain:       ";
    // for(size_t i = 0; i < mainChain.size(); i++)
    //     std::cout << mainChain[i] << " ";
    // puts("");
    // std::cout << "insert: ";
    // for(size_t i = 0; i < insert.size(); i++)
    //     std::cout << insert[i] << " ";
    // puts("");

    for(size_t i = 0; i < size; i++) {
        (i < jacobsthalOrder.size()) ? order = jacobsthalOrder[i] - 1 : order = i;
        for (v_int::iterator it = mainChain.begin(); it != mainChain.end(); it++)
        {
            // std::cout <<  (itPairs + order)->first << " ";
            // printf (" ord = %d pend = %d it = %d\n", order, insert[order], *it);
            if (insert[order] <= *it || (i == size -1  && it == mainChain.end() - 1)) { // = in this comparison it minimis iteration (time complex) 50 nember 654 ==> 209
                
                // printf ("zpend = %d\n",  insert[order]);
                (i == size -1  && it == mainChain.end() - 1) ? mainChain.insert(++it, insert[order]) : mainChain.insert(it , insert[order]);
                // if ((i == size -1  && it == mainChain.end() - 1))
                //     mainChain.push_back(pendingElements[order]);
                // else
                //     mainChain.insert(it , pendingElements[order]);
                break;
            }
            // c++;
        }
    }
    // std::cout << "c = " <<c<<"\n";
    return mainChain;
}