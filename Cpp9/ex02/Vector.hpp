/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:27:01 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/05 14:37:17 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <vector>

class Vector
{
private:
    std::vector<int> array;
    std::vector<int> mainChain;
    std::vector<int> insert;
    std::vector<int> jacobsthalOrder;
    int SizePairs;
public:
    Vector(void);
    Vector(const std::vector<int>& array);
    Vector& operator=(const Vector& overl);
    Vector(const Vector& copy);
    ~Vector();
    int binarySearch(const std::vector<int>& array, int left, int right, int x);
    void createPairs();
    void JacobsthalOrder(int n);
    void sort(void);
    void print(void);
};

#endif