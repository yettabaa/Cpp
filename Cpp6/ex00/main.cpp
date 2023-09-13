/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:34:04 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/13 04:18:37 by yettabaa         ###   ########.fr       */
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
    ScalarConverter obj;
    obj.convert(literal);
    return 0;
}
