/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:56:10 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/06 11:21:08 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <iomanip>

int main(int ac, char const *av[])
{
	try
	{
		if (ac != 2)
			throw std::runtime_error("invalid number of argument!");
		double value;
		std::string hold;
		std::map<std::time_t, double> dataBase; //delete
	
		std::ifstream dataBaseFile("data.csv"); //protect
		if (!dataBaseFile.is_open())
			throw std::runtime_error("Error opning Data base file");
		std::ifstream inputFile(av[1]); //protect
		if (!inputFile.is_open())
			throw std::runtime_error("Error opning inpute file");

		std::getline(dataBaseFile, hold);
		while (!dataBaseFile.eof())
		{
			std::getline(dataBaseFile, hold);
			if (hold.size() > 10)
				dataBase[DateToSeconds(hold.substr(0, 10))] = atof(hold.substr(11).c_str());
		}
		std::getline(inputFile, hold);
		while (!inputFile.eof())
		{
			std::getline(inputFile, hold);
			if (ErrorHandler(hold))
				continue;
			value = findValue(dataBase, DateToSeconds(hold.substr(0, 10))) * atof(hold.substr(13).c_str());
				// printf("=============>    find = %f val = %f value = %f\n", findValue(dataBase, DateToSeconds(hold.substr(0, 10))), atof(hold.substr(13).c_str()), value);
			(value - static_cast<int>(value)) && std::cout << std::fixed << std::setprecision(2);
			std::cout << hold.substr(0, 10) << " => " << hold.substr(13) << " = " << value << std::endl;
			std::cout << std::setprecision(0);
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}
