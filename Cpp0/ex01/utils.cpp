/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:57:01 by yettabaa          #+#    #+#             */
/*   Updated: 2023/07/30 00:46:22 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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

std::string _check(int field, int &flag)
{
    std::string str;
    int i = -1;

    std::getline(std::cin, str);
    if (std::cin.eof()) 
    {
        str = "";
        return (flag = FALSE, str);
    }
    str = trim(str, " \t");
    if (field == 3)
    {
        while (str[++i])
        {
            if ((!(isdigit(str[0]) || str[0] == '+')) || (i && !isdigit(str[i])))
            {
                str = "";
                flag = NOTDIGIT;
            }
        }
    }
    return (str);
}