/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:56:10 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/30 01:47:07 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

int main(int ac, char const *av[])
{
    (void)av;
    try
    {
        if (ac != 2)
            throw std::runtime_error("invalid number of argument!");
        std::string test2;
        std::stringstream test;
        // std::stringstream test3;
        std::map<std::string, double> dataBase;
        std::ifstream dataBaseFile("data.csv"); //protect
        if (!dataBaseFile.is_open())
            throw std::runtime_error("Error opning Data base file");
        std::ifstream inputFile(av[1]); //protect
        if (!inputFile.is_open())
            throw std::runtime_error("Error opning inpute file");
        // std::string test2(test.str());
        // test << dataBaseFile.rdbuf(); //protect rdbuf
        test >> test2;
        // int i = 0;
        while (test)
        {
            test >> test2;
            
            // (atof(test2.substr(test2.find(',') +1).c_str()) <= 1000)&&(std::cout << test2.substr(0, test2.find(',')) << "   " << test2.substr(test2.find(',') +1) <<'\n');
            // (std::cout << test2.substr(0, test2.find(',')) << "   " << test2.substr(test2.find(',') +1) <<'\n');
            dataBase[test2.substr(0, test2.find(','))] = atof(test2.substr(test2.find(',') +1).c_str());
            // if (i++ == 100)
            //     break;
        }
        // test3 << inputFile.rdbuf(); //protect rdbuf
        std::getline(inputFile, test2);
        while (!inputFile.eof())
        {
            std::getline(inputFile, test2);
            // std::cout << test2 <<'\n';
            
            // (atof(test2.substr(test2.find(',') +1).c_str()) <= 1000)&&(std::cout << test2.substr(0, test2.find(',')) << "   " << test2.substr(test2.find(',') +1) <<'\n');
            (std::cout << test2.substr(0, test2.find('|')) << "   " << test2.substr(test2.find('|') +1) <<'\n');
            // dataBase[test2.substr(0, test2.find(','))] = atof(test2.substr(test2.find(',') +1).c_str());
            // if (i++ == 100)
            //     break;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
