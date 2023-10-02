/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:56 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/02 21:58:28 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sstream>

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


// #include <algorithm>
// #include <functional>

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

void sort(const v_int& array)
{
    // size_t size;

    // (array.size() % 2 == 0) && (size = array.size() / 2);
    // (array.size() % 2 != 0) && (size = array.size() / 2 + 1);
    std::vector<std::pair <int, int> > pairs(ceil((double)array.size() /2)); //put -1 in the last case of odd
    // std::cout << "size " << ceil((double)array.size() / 2) <<"\n";
    for (std::vector<std::pair <int, int > >::iterator it = pairs.begin(); it != pairs.end(); it++) {
        // std::cout << "fisrt " << (it - pairs.begin()) *2 << " sec " << (it - pairs.begin()) *2 +1 << "\n";
        it->first = array[(it - pairs.begin()) *2];
        if (it == (pairs.end() -1) &&  array.size() % 2 != 0)
            it->second = -1;
        else
            it->second = array[(it - pairs.begin()) *2 +1];
        sortPair(pairs[it - pairs.begin()]); //the function can puted here
    }
    for (std::vector<std::pair <int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++) {
        std::cout << it->first << " " << it->second << " ";
    }
    // std::for_each(pairs.begin(), pairs.end(), &sortPair);
    std::sort(pairs.begin(), pairs.end());
    puts("");
    v_int zab;
    for (std::vector<std::pair <int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++) {
        zab.push_back(it->first);
        std::cout << it->first << " " << it->second << " ";
    }
    puts("");
    for(size_t i =0; i < zab.size(); i++)
        std::cout << zab[i] << " ";
    // return 
}