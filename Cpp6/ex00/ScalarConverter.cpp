/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:40:27 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/15 23:24:48 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "utils.hpp"
#include <sstream>
#include <iomanip>
#include <cmath>

ScalarConverter::ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& overl)
{
    (void)overl;
    return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
    *this = copy;
}

ScalarConverter::~ScalarConverter() {}

const char* ScalarConverter::checker(const std::string& literal)
{
    if (literal == "nan" || literal == "+inf" || literal == "-inf" || literal == "nanf" || literal == "+inff" || literal == "-inff")
        return ("infs");
    if (literal[0] == '\'' && literal[2] == '\'' && literal.size() == 3 && std::isprint(literal[1])) //is printable
        return ("char");
    if (Checksign(literal, INT)  && checkFloat(literal, INT))
            return ("int");
    if (Checksign(literal, FLOAT) && countCharacter(literal, '.') == 1 && countCharacter(literal, 'f') == 1 && 
    literal[literal.size() - 1] == 'f' && literal.size() > 2 && checkFloat(literal, FLOAT))
            return ("float");
    if (Checksign(literal, DOUBLE) && countCharacter(literal, '.') == 1 && literal.size() > 1 && checkFloat(literal, DOUBLE))
            return ("double");
    return ("Error");
        
}

void ScalarConverter::toChar(const std::string& literal)
{
    std::cout << "char: \'" << static_cast<char> (literal[1]) << "\'" << std::endl;
    std::cout << "int: " << static_cast<int> (literal[1]) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float> (literal[1]) << "f" << std::endl;
    std::cout << "double: " << static_cast<double> (literal[1]) << std::endl;
}

void ScalarConverter::toInt(const std::string& literal)
{
    int scalar;
    std::stringstream hold(literal);
    
    hold >> scalar;
    if (hold.fail())//|| hold.bad()) // ???
    {
        std::cerr << "an overflow occure" << std::endl;
        exit(1);
    }
    
    (isprint(static_cast<char> (scalar))) && (std::cout << "char: \'" << static_cast<char> (scalar) << "\'" << std::endl);
    (!isprint(static_cast<char> (scalar))) && (std::cout << "char: Non displayable" << std::endl);
    std::cout << "int: " << static_cast<int> (scalar) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float> (scalar) << "f" << std::endl;
    std::cout << "double: " << static_cast<double> (scalar) << std::endl;
}

void ScalarConverter::toFloat(const std::string& literal)
{
    float scalar = atof(literal.c_str());
    // std::stringstream hold(literal.substr(0, literal.size() - 1));
    
    // hold >> scalar;
    (isprint(static_cast<char> (scalar))) && (std::cout << "char: \'" << static_cast<char> (scalar) << "\'" << std::endl);
    (!isprint(static_cast<char> (scalar))) && (std::cout << "char: Non displayable" << std::endl);
    std::cout << "int: " << static_cast<int> (scalar) << std::endl;
    (!(scalar - static_cast<int>(scalar))) && std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float> (scalar) << "f" << std::endl;
    std::cout << "double: " << static_cast<double> (scalar) << std::endl;
}

void ScalarConverter::toDouble(const std::string& literal)
{
    double scalar = atof(literal.c_str());
    // std::stringstream hold(literal);
    
    // hold >> scalar;
    (isprint(static_cast<char> (scalar))) && (std::cout << "char: \'" << static_cast<char> (scalar) << "\'" << std::endl);
    (!isprint(static_cast<char> (scalar))) && (std::cout << "char: Non displayable" << std::endl);
    std::cout << "int: " << static_cast<int> (scalar) << std::endl;
    (!(scalar - static_cast<int>(scalar))) && std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float> (scalar) << "f" << std::endl;
    std::cout << "double: " << static_cast<double> (scalar) << std::endl;
}
void ScalarConverter::toInfs(const std::string& literal)
{
    std::string str = literal;
    double scalar;
    if (countCharacter(str, 'f') == 2 || str == "nanf")
        str = str.substr(0,str.size() - 1);
    std::stringstream hold(str);
    
    hold >> scalar;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << static_cast<float> (scalar) << "f" << std::endl;
    std::cout << "double: " << static_cast<double> (scalar) << std::endl;
}

void ScalarConverter::convert(const std::string& literal)
{
    int i = 0;
    std::string check = checker(literal);
    // std::cout << "fgfgdf    " << check <<std::endl;
    std::string str[] = {"char", "int", "float", "double", "infs", ""};
    // std::cout << "fgfgdf    " << str[0] <<std::endl;
    void (*ptr[])(const std::string& literal) = {&ScalarConverter::toChar, &ScalarConverter::toInt, 
    &ScalarConverter::toFloat, &ScalarConverter::toDouble, &ScalarConverter::toInfs};
    
    while (!str[i].empty() && str[i] != check)
        i++;
    if (i == 5)
    {
        std::cerr << "Syntax Error" <<std::endl;
        exit(1);
    }
    // printf("= >  %d\n", i);
    std::cout << "------>   "<<checker(literal) << std::endl; //hyedha
    (ptr[i])(literal);
}
