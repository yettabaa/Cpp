/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:52:16 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/05 18:46:27 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector.hpp"
#include <cmath>

Vector::Vector(void) { throw std::runtime_error("Error: use arameterized constructor"); } 

Vector::Vector(const std::vector<int>& array) : array(array), SizePairs(array.size() / 2) {} 

Vector& Vector::operator=(const Vector& overl) 
{
    array = overl.array;
    mainChain = overl.mainChain;
    insert = overl.insert;
    jacobsthalOrder = overl.jacobsthalOrder;
    SizePairs = overl.SizePairs;
    return (*this);
}

Vector::Vector(const Vector& copy) { *this = copy;}

Vector::~Vector() {}

int Vector::binarySearch(const std::vector<int>& array, int left, int right, int x)
{
    int middle;
    while (left <= right) 
    {
        middle = left + (right - left) / 2;
        if (array[middle] == x)
            return middle;
        (array[middle] < x) ? left = middle + 1 : right = middle - 1;
    }
    return left;
}

void Vector::createPairs(void)
{
    std::vector<int> tmpMainChain, tmpInsert;
    int binary;

    for (int i = 0; i < SizePairs; i++) {
        tmpMainChain.push_back(array[i *2]);
        tmpInsert.push_back(array[(i *2) +1]);
        if (i == SizePairs -1 &&  array.size() % 2 != 0)
            tmpInsert.push_back(*--array.end());
        if (tmpMainChain.at(i) < tmpInsert.at(i))
            std::swap(tmpMainChain.at(i) , tmpInsert.at(i));
            
        binary = binarySearch(mainChain, 0, i -1, tmpMainChain.at(i));
        mainChain.insert(mainChain.begin() + binary, tmpMainChain.at(i));
        insert.insert(insert.begin() + binary, tmpInsert.at(i));
        if (i == SizePairs -1 &&  array.size() % 2 != 0)
            insert.push_back(*--array.end());
        // std::cout << it->first << " " << it->second << " ";
    }
}

void Vector::JacobsthalOrder(int n)
{
    long jaco, j;// 2731; //1 3 5 11 21 43 85 171 341 683 1365 2731 5461 
    std::vector<int> jacobs;
    
    jacobs.push_back(1);
    jacobsthalOrder.push_back(1);
    for(int i = 2; i <= n; i++) {
        jaco = (std::pow(2, i) + std::pow(-1, i - 1)) / 3; // Jacobsthal formula
        (n > jaco) &&  (j = jaco);
        (n <= jaco) &&  (j = n);
        while (j > *--jacobs.end())
            jacobsthalOrder.push_back(j--);
        if (jaco >= n)
            break;
        jacobs.push_back(jaco);
    }
}

void Vector::sort(void)
{
    createPairs();
    JacobsthalOrder(SizePairs);
    size_t binary ,order, InsertSize = insert.size(), jacobSize = jacobsthalOrder.size();

    for(size_t i = 0; i < InsertSize; i++) 
    {
        (i < jacobSize) ? order = jacobsthalOrder[i] - 1 : order = i;
        binary = binarySearch(mainChain, 0, i + order -1, insert[order]);
        mainChain.insert(mainChain.begin() + binary, insert[order]);
    }
}

void Vector::print(void)
{
    std::cout << "Before:    ";
    for (std::vector<int>::iterator it = array.begin(); it != array.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "After:     ";
    for (std::vector<int>::iterator it = mainChain.begin(); it != mainChain.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}