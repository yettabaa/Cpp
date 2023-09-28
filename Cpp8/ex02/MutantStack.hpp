/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 01:10:08 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/28 01:05:13 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>
#include <iostream>
#include <list>

// template <class T, class Container = std::deque<T> >
template <class T >
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator; //clarify that container_type::iterator is a type of class std::stack<T> . typedef rename this type to iterator
    // typedef typename Container::iterator iter;
    iterator begin() { return (this->c.begin()); }
    iterator end() { return (this->c.end()); }
    // class iterator : public std::stack<T> 
    // {
    //     iter ptr;
    // public:
    //     iterator() {}
    //     iterator& operator=(const iterator& overl) {
    //         ptr = overl.ptr;
    //         return (*this);
    //     }
    //     iterator (const iterator& copy) { *this = copy; }
    //     iterator (const iter& copy) { ptr = copy; }
    //     ~iterator() {}
    //     bool operator!=(const iterator& obj) const { return(this->ptr != obj.ptr); }
    //     T& operator*() { return(*ptr); }
    //     iterator& operator++() { 
    //         this->ptr++;
    //         return (*this); 
    //     }
    //     iterator& operator--() { 
    //         this->ptr--;
    //         return (*this); 
    //     }
    //     iterator operator++(int) {
    //         iterator tmp(*this);
    //         this->ptr++;
    //         return tmp; 
    //     }
    //     iterator operator--(int) {
    //         iterator tmp(*this);
    //         this->ptr--;
    //         return tmp; 
    //     }
    // };
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