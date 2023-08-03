/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:50:17 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/03 09:57:42 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string str;
	PhoneBook phonebook;
	
	while(str != "EXIT")
	{
		(str.empty()) && std::cout << "*------------------------------*\n" 
						<< "|   -You have three command-   |\n"
			 			<< "|       ADD ,SEARCH ,EXIT      |\n"
						<< "*------------------------------*" << std::endl;
		std::cout << "PhoneBook > ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (std::cout << std::endl, 0);
		if (str == "ADD")
			phonebook._add();
		else if(str == "SEARCH")
			phonebook._display();
		else
			std::cout << "* Invalid comand! *" << std::endl;		
	}
}