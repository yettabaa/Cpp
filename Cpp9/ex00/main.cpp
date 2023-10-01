/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:56:10 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/30 23:22:03 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
// #include <iostream>
#include <fstream>

#include <map>

#include <ctime>
#include <sstream>
std::time_t DateToSeconds(const std::string& str) 
{
	//  std::cout <<"zab  " << str << "|\n";
	std::tm timeInfo = {};
	std::istringstream date(str);

	// Extract month, day, and year
	int month, day, year;
	char c;
	date >> year >> c >> month >> c >> day;
	// Set timeInfo components
	timeInfo.tm_year = year - 1900; // Years since 1900
	timeInfo.tm_mon = month - 1;    // Months are 0-11
	timeInfo.tm_mday = day;
	// Convert to time_t (seconds since epoch)
	return std::mktime(&timeInfo);
}

double findValue(std::map<std::time_t, double> &dataBase, std::time_t key)
{
	std::map<std::time_t, double>::iterator it;
	for (it = dataBase.begin(); it != dataBase.end(); it++)
		if (it->first >= key)
			break;    
	return it->second;
}

int main(int ac, char const *av[])
{
	try
	{
		if (ac != 2)
			throw std::runtime_error("invalid number of argument!");
		std::string test2;
		std::map<std::time_t, double> dataBase; //delete
		// std::map<std::string, double> dataInput;
		std::ifstream dataBaseFile("data.csv"); //protect
		if (!dataBaseFile.is_open())
			throw std::runtime_error("Error opning Data base file");
		std::ifstream inputFile(av[1]); //protect
		if (!inputFile.is_open())
			throw std::runtime_error("Error opning inpute file");
		// std::string test2(test.str());
		// test << dataBaseFile.rdbuf(); //protect rdbuf
		std::getline(dataBaseFile, test2);
		// int i = 0;
		while (!dataBaseFile.eof()) // should check syntax of data base?
		{
			// puts("sss");
			//  std::cout <<"zab  " << DateToSeconds(test2.substr(0, 10)) << " i= " << i++<<std::endl;
			std::getline(dataBaseFile, test2);
			// (atof(test2.substr(test2.find(',') +1).c_str()) <= 1000)&&(std::cout << test2.substr(0, test2.find(',')) << "   " << test2.substr(test2.find(',') +1) <<'\n');
			// (std::cout << test2.substr(0, test2.find(',')) << "   " << test2.substr(test2.find(',') +1) <<'\n');
			// dataBase[test2.substr(0, test2.find(','))] = atof(test2.substr(test2.find(',') +1).c_str());
			if (test2.length() > 10)
				dataBase[DateToSeconds(test2.substr(0, 10))] = atof(test2.substr(11).c_str());
			// if (i++ == 100)
			//     break;
		}
		std::getline(inputFile, test2);
		while (!inputFile.eof())
		{
			std::getline(inputFile, test2);
			if (badInput(test2))
				continue;
			// std::cout << test2 <<'\n';
			// (atof(test2.substr(test2.find(',') +1).c_str()) <= 1000)&&(std::cout << test2.substr(0, test2.find(',')) << "   " << test2.substr(test2.find(',') +1) <<'\n');
			std::cout << test2.substr(0, 10) << " => " << test2.substr(13) << " = " 
						<< findValue(dataBase, DateToSeconds(test2.substr(0, 10))) * atof(test2.substr(13).c_str())
						<< std::endl;
			// dataInput[test2.substr(0, 10)] = atof(test2.substr(13).c_str());
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
