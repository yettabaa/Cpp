/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:56:12 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/30 07:24:54 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}
int countCharacter(const std::string& str, char target) 
{
    int count = 0;
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (*it == target) {
            count++;
        }
    }
    return count;
}
int CheckDigit(const std::string& str, int flag)
{
    int i = -1;

    while (flag == 0 && ++i < (int)str.size())
        if (!std::isdigit(str[i]) && str[i] != '.'  && str[i] != '-' && str[i] != '+')
            return (0);
    while (flag == 1 && ++i < (int)str.size())
        if (!std::isdigit(str[i]) && str[i] != '-' && str[i] != '+')
            return (0);
    return(1);        
    
}

int Checksign(const std::string& str, int flag)
{
    if (flag == 0 && ((countCharacter(str, '-') == 1 && str[0] == '-' && str.size() > 2) || !countCharacter(str, '-')) && 
        ((countCharacter(str, '+') == 1 && str[0] == '+' && str.size() > 2) || !countCharacter(str, '+')))
        return 1;
    if (flag == 1 && ((countCharacter(str, '-') == 1 && str[0] == '-' && str.size() > 1) || !countCharacter(str, '-')) && 
        ((countCharacter(str, '+') == 1 && str[0] == '+' && str.size() > 1) || !countCharacter(str, '+')))
        return 1;
    return 0;
}

bool isValidDate(const std::string &str) 
{
        // std::cout <<"zab  " << str << "|\n";
    if (countCharacter(str, '-') != 2 || str[4] != '-' || str[7] != '-')
        return (false);
    char c;
    int year, month, day;
    std::stringstream date(str);
    
    date >> year >> c >> month >> c >> day;
    // int year = atoi(str.substr(0, 4).c_str());
    // int month = atoi(str.substr(5, 2).c_str());
    // int day = atoi(str.substr(8).c_str());
    // printf("y = %d m = %d d = %d\n", year, month, day);
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) 
        return false;
    // Check for months with 30 days
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    // Check for leap years (February can have 29 days)
    if (month == 2 && day == 29 && (year % 4 == 0))
        return true;
    // Check for February (28 days)
    if (month == 2 && day > 28)
        return false;
    return true;
}
bool isValidValue(const std::string &str) 
{
    // std::cout <<"zab  " << str << "|\n";
    long value;
    std::stringstream convert(str);

    if ((Checksign(str, 1) && CheckDigit(str, 1)) ||
    (Checksign(str, 0) && countCharacter(str, '.') == 1 && str.size() > 1 && CheckDigit(str, 0)))
    {
        convert >> value;
        if ((str.length() > 4 && !countCharacter(str, '-')) || value > 1000)
            return (std::cout << "Error: too large a number." << std::endl, false);
        if ((countCharacter(str, '-')) || value < 0)
            return (std::cout << "Error: not a positive number." << std::endl, false);
    }

    return true;
}

bool badInput(std::string str)
{
    if (countCharacter(str, '|') != 1 || str[11] != '|')
        return (std::cout << "Error: bad inpute => " << str << std::endl, true);
    if (countCharacter(str, ' ') != 2 || str[10] != ' ' || str[12] != ' ')
        return (std::cout << "Error: bad inpute => " << str << std::endl, true);
    if (!isValidDate(str.substr(0, 10)))
        return (std::cout << "Error: invalid date => " << str << std::endl, true);
    if (!isValidValue(str.substr(13)))
        return (true);
        // return (std::cout << "Error: invalid date => " << str << std::endl, true);
    return false;  
}