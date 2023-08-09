/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:39:21 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/08 22:55:06 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string _replace(std::string str, std::string s1, std::string s2)
{
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos && !s1.empty())
    {
        str.erase(pos, s1.length()); // remove a portion of string 
        str.insert(pos, s2);
        pos += s2.length();
    }
    return(str);
}