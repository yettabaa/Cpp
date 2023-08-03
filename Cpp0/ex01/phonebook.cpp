/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:50:17 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/03 10:35:15 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {indx = 0;}

void PhoneBook::_add()
{
	flag = TRUE;
	i = -1;
	while (++i < 5)
	{
		std::cout << contact[indx].field[i] << ": ";
		contact[indx].tmp[i] = _check(i, &flag);
	}
	i = -1;
	while (++i < 5)
	{
		if (contact[indx].tmp[i].empty())
		{
			std::cout << std::endl;  
			std::cout << "* The new contact is not saved! *" << std::endl;
			(flag == NOTDIGIT) && std::cout << "- {phone number} should contains only numbers" << std::endl;
			std::cout << "- You forgot: ";
			j = -1;
			while (++j < 5)
				(contact[indx].tmp[j].empty()) && std::cout  << "{" << contact[indx].field[j] << "} ";
			std::cout << ".\n" <<std::endl;  
			j = -1;
			while (++j < 5)
				contact[indx].tmp[j] = "";
			return;
		}
	}
	i = -1;
	while (++i < 5)
		contact[indx].info[i] = contact[indx].tmp[i];
	std::cout << "\n* The new contact was successfully saved! *\n" << std::endl;
	indx = (indx +1) %8;
}

void PhoneBook::_display()
{
	if (contact[0].info[0].empty())
	{
		std::cout << "\n* You haven't any saved contact yet! *\n" << std::endl;
		return;
	}
	j = -1;
	while (++j < 8 && !contact[j].info[0].empty())
	{
		i = -1;
		std::cout << "*-------------------------------------------*" << std::endl;
		std::cout << "|" << std::setw(10) << j + 1 ;
		while (++i < 3)
		{
			std::cout << "|" << std::setw(10);
			(contact[j].info[i].length() <= 9) && std::cout <<  contact[j].info[i];
			(contact[j].info[i].length() > 9) && std::cout << contact[j].info[i].substr(0 ,9) + ".";
		}
		std::cout << "|"<<std::endl;
	}
	std::cout << "*-------------------------------------------*" << std::endl;
	_search();
}

void PhoneBook::_search(void)
{
	std::stringstream str;
	
	std::cout << "Enter the index: ";
	std::getline(std::cin, hold);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		exit(1);
	}
	hold = trim(hold, " \t");
	str << hold;
	str >> i;
	if (i < 1 || i > 8 || hold.length() > 1)
	{
		std::cout << "\n* The index must be a number between 1 to 8! *\n" << std::endl;
		return ;
	}
	(contact[i - 1].info[0].empty()) && (std::cout << "\n* No contact saved in index " << i << " *\n" << std::endl);
	j = -1;
	while (++j < 5)
		(!contact[i - 1].info[0].empty()) && std::cout << contact[i - 1].field[j] << ": " << contact[i - 1].info[j] << std::endl;
}
