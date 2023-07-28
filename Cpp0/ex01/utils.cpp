/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:57:01 by yettabaa          #+#    #+#             */
/*   Updated: 2023/07/28 01:50:55 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

std::string trim(std::string str, std::string str1)
{
    size_t i = 0;
    size_t j = str.length();

    if (!str[0])
        return (str = "", str);
    while (str[i] && !str1.find(str[i++]))
        ;
    while (--j && !str1.find(str[j]))
        ;
    (j +2 < i) && (j = 0);
    (j +2 >= i) && (j = j +2 - i);
    str = str.substr(i -1, j);
    
    return (str);
}

std::string _check(void)
{
    std::string str;

    std::getline(std::cin, str);
    str = trim(str, " \t");
    // if (!str[0]) //change to c++ style
    //fild  of .. is emty
    //Contact save faild! you dont put this fild
    return (str);
}