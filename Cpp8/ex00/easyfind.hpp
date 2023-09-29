/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:22:47 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/28 22:27:50 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iterator>
#include <iostream>

template <typename T>
int easyfind(T type, int occurrence) {
    std::vector<int>::iterator iter; // Declaring iterator to a vector
    iter = std::find(type.begin(), type.end(), occurrence);
    // for (iter = type.begin() ;*iter != occurrence && iter < type.end(); iter++) {}
    if (iter == type.end())
        throw "The occurrence not found";
    return (iter - type.begin());
}

#endif