/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:34:04 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/15 22:28:59 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char const *av[])
{
    if (ac != 2)
    {
        std::cerr << "invalid number of argument!" << std::endl;
        return (1);
    }
    const std::string literal = av[1];
    // ScalarConverter obj;
    ScalarConverter::convert(literal);
    
    return 0;
}
