/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:54:16 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/19 04:12:41 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
//we introduced the challenge of having to create a separate (overloaded) 
//function for each different set of types we want to work with:
//The solution to this was to create a function template that the compiler can use to
// instantiate normal functions for whichever set of types we need:
template <typename T> void swap(T& a, T& b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template <typename T> T max(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T> T min(T a, T b)
{
    return (a < b) ? a : b;
}

#endif