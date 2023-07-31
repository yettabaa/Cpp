/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:50:17 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/01 00:26:23 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	std::string str;
	Contact add;
	
	while(str != "EXIT")
	{
		(str.empty()) &&std::cout << "*------------------------------*\n" 
						<< "|   -You have three command-   |\n"
			 			<< "|       ADD ,SEARCH ,EXIT      |\n"
						<< "*------------------------------*" << std::endl;
		std::cout << "PhoneBook > ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (std::cout << std::endl, 0);
		if (str == "ADD")
			add._add();
		else if(str == "s")// chenge name
			add._display();
		else
			std::cout << "* Invalid comand! *" << std::endl;		
	}
}
