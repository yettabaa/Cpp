/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deque.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:52:55 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/06 11:58:37 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_HPP
#define DEQUE_HPP

#include <iostream>
#include <deque>

class Deque
{
private:
    std::deque<int> array;
    std::deque<int> mainChain;
    std::deque<int> insert;
    std::deque<int> jacobsthalOrder;
    int SizePairs;
public:
    Deque(void);
    Deque(const std::deque<int>& array);
    Deque& operator=(const Deque& overl);
    Deque(const Deque& copy);
    ~Deque();
    int binarySearch(const std::deque<int>& array, int left, int right, int x);
    void createPairs();
    void JacobsthalOrder(int n);
    void sort(void);
    void print(void);
};

#endif