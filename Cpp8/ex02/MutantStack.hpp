/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 01:10:08 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/28 23:06:19 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>
#include <iostream>
#include <list>

template <class T > 
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator; //cases like that you have to disambiguate the situation by explicitly telling the compiler that the name belongs to a typename defined as a member of that dependent type
    //the compiler can't determine whether std::stack<T>::container_type::iterator represents a type or a value at compile-time
    iterator begin() { return (this->c.begin()); }
    iterator end() { return (this->c.end()); }
    MutantStack() {}
    MutantStack& operator=(const MutantStack& overl) 
    {
        std::stack<T>::operator=(overl);
        return (*this);
    }
    MutantStack(const MutantStack& copy) {*this = copy;}
    ~MutantStack() {}
};

#endif