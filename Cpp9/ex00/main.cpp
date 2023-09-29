/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:56:10 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/29 04:22:22 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char const *av[])
{
    (void)ac;
    (void)av;
    std::ifstream dataFile("data.csv");
    //prot
    std::stringstream test;
    test << dataFile.rdbuf(); //protect rdbuf
    // std::string test2(test.str());
    std::string test2;
    test >> test2;
    test >> test2;
    std::cout << test2 <<'\n';
    return 0;
}
