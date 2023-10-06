/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:24:57 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/06 11:30:38 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include<sstream>
#include<stack>

std::string trim(const std::string& str, const std::string& str1)
{
    size_t i = 0;
    size_t j = str.length();

    while (str[i] && !str1.find(str[i++]))
        ;
    while (--j && !str1.find(str[j]))
        ;
    (j +2 < i) && (j = 0);
    (j +2 >= i) && (j = j +2 - i);
    return (str.substr(i -1, j));
}

void checker(std::string &expression)
{
    if (expression.empty())
            throw std::runtime_error("Error");
            
    std::stringstream split(trim(expression, " "));
    std::string tmp;
    expression = "";
    // std::cout << expression <<'\n';
    while (!split.eof())
    {
        split >> tmp;
        // std::cout << "tmp " << tmp <<'\n';
        if (!std::isdigit(tmp[0]) && !std::strchr("+-/*", tmp[0]))
            throw std::runtime_error("Error");
        expression += tmp;
    }
}

int RPN(std::string expression)
{
    checker(expression);
    // std::cout << "expression =    |"<< expression <<"|\n";
    std::stack<int> stack;
    int a, b;
    
    for(size_t i = 0; i < expression.length(); i++)
    {
        if (!std::strchr("+-/*", expression[i]) && std::isdigit(expression[i])) {
            stack.push(expression[i] - '0');
            continue;
        }
        if (stack.size() < 2)
            throw std::runtime_error("Error: incorect expression");
        b = stack.top();
        if (!b && expression[i] == '/')
            throw std::runtime_error("Error: the divisor should not be 0");
        stack.pop();
        a = stack.top();
        stack.pop();
        if (expression[i] == '+')
            stack.push(a + b);
        else if (expression[i] == '-')
            stack.push(a - b);
        else if (expression[i] == '/')
            stack.push(a / b);
        else if (expression[i] == '*')
            stack.push(a * b);
    }
    // std::cout << "empty " <<  stack.size() <<"\n";
    if (stack.size() != 1)
        throw std::runtime_error("Error: incorect expression");
    return stack.top();
}