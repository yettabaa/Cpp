/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:39:08 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/13 04:49:19 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
private:

public:
    ScalarConverter();
    ScalarConverter& operator=(const ScalarConverter& overl);
    ScalarConverter(const ScalarConverter& copy);
    ~ScalarConverter();
    void convert(const std::string& literal);
    const char* checker(const std::string& literal);
    // char toChar(const std::string& literal);
    // int toInt(const std::string& literal);
    // float toFloat(const std::string& literal);
    // double toDouble(const std::string& literal);
};
int countCharacter(const std::string& str, char target);
int checkFloat(const std::string& str);

#endif