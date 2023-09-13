/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:40:27 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/13 04:48:26 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
int countCharacter(const std::string& str, char target) 
{
    int count = 0;
    for (int j = 0; str[j] ; j++)
        if (str[j] == target)
            count++;
    return count;
}
ScalarConverter::ScalarConverter()
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& overl)
{
    (void)overl;
    return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
    *this = copy;
}

ScalarConverter::~ScalarConverter()
{
}

const char* ScalarConverter::checker(const std::string& literal)
{
    printf("==>   %lu count = %d\n  ", literal.size(), countCharacter(literal, '.'));
    if (literal[0] == '\'' && literal[2] == '\'' && literal.size() == 3 && std::isprint(literal[1])) //is printable
        return ("is char");
    if (countCharacter(literal, '.') == 1 && countCharacter(literal, 'f') == 1 && literal[literal.size() - 1] == 'f')
    {

        return ("is float");
    }
    return ("Error");
        
}

// char ScalarConverter::toChar(const std::string& literal)
// {
    
// }

// int ScalarConverter::toInt(const std::string& literal)
// {
    
// }

// float ScalarConverter::toFloat(const std::string& literal)
// {
    
// }

// double ScalarConverter::toDouble(const std::string& literal)
// {
    
// }

void ScalarConverter::convert(const std::string& literal)
{
    std::cout << checker(literal) << std::endl;
}
