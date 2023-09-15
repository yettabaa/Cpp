/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:39:08 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/15 04:28:26 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
//Static member functions are not associated with an instance of a class, 
//so they do not have a this pointer,
class ScalarConverter //static
{
private:
    static void toChar(const std::string& literal);
    static void toInt(const std::string& literal);
    static void toFloat(const std::string& literal);
    static void toDouble(const std::string& literal);
    static void toInfs(const std::string& literal);
    static const char* checker(const std::string& literal);
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter& copy);
    ScalarConverter& operator=(const ScalarConverter& overl);
public:
    static void convert(const std::string& literal);
};


#endif