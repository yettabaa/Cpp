/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:08:03 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/19 21:39:10 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T> 
void iter( T *array, int len, void (*fun)( T const &)){ // if dont use const and the funstion pase in parametre have  a const parametre an idefine behavor apear
    for (int i = 0; i < len; i++)
        fun(array[i]);
}
template <typename T > 
void iter( T *array, int len, void (*fun)(T  &)){ // if dont use const and the funstion pase in parametre have  a const parametre an idefine behavor apear
    for (int i = 0; i < len; i++)
        fun(array[i]);
}

#endif