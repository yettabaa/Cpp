/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:47:40 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/15 01:22:31 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int countCharacter(const std::string& str, char target) 
{
    int count = 0;
    for (int j = 0; str[j] ; j++)
        if (str[j] == target)
            count++;
    return count;
}

int checkFloat(const std::string& str, int flag)
{
    int i = -1;
    while (flag == FLOAT && ++i < (int)str.size())
        if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != '-' && str[i] != '+')
            return (0);
    while (flag == DOUBLE && ++i < (int)str.size())
        if (!std::isdigit(str[i]) && str[i] != '.'  && str[i] != '-' && str[i] != '+')
            return (0);
    while (flag == INT && ++i < (int)str.size())
        if (!std::isdigit(str[i]) && str[i] != '-' && str[i] != '+')
            return (0);
    return(1);        
    
}

int Checksign(const std::string& str, int flag)
{
    if (flag == FLOAT && ((countCharacter(str, '-') == 1 && str[0] == '-' && str.size() > 3) || !countCharacter(str, '-')) && 
        ((countCharacter(str, '+') == 1 && str[0] == '+' && str.size() > 3) || !countCharacter(str, '+')))
        return 1;
    if (flag == DOUBLE && ((countCharacter(str, '-') == 1 && str[0] == '-' && str.size() > 2) || !countCharacter(str, '-')) && 
        ((countCharacter(str, '+') == 1 && str[0] == '+' && str.size() > 2) || !countCharacter(str, '+')))
        return 1;
    if (flag == INT && ((countCharacter(str, '-') == 1 && str[0] == '-' && str.size() > 1) || !countCharacter(str, '-')) && 
        ((countCharacter(str, '+') == 1 && str[0] == '+' && str.size() > 1) || !countCharacter(str, '+')))
        return 1;
    return 0;
}