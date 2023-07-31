/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 00:53:05 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/01 00:13:40 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contact::_add()
{
	// printf("%d\n", indx);
	ctrd = TRUE;
	i = -1;
	while (++i < 5 && ctrd)
	{
		std::cout << book[indx].field[i] << ": ";
		book[indx].tmp[i] = _check(i, ctrd);
	}
	i = -1;
	while (++i < 5 && ctrd)
	{
		if (book[indx].tmp[i].empty())
		{
			std::cout << std::endl;  
			std::cout << "* The new contact is not saved! *" << std::endl;
			(ctrd == NOTDIGIT) && std::cout << "- {phone number} should contains only numbers" << std::endl;
			std::cout << "- You forgot: ";
			j = -1;
			while (++j < 5)
				(book[indx].tmp[j].empty()) && std::cout  << "{" << book[indx].field[j] << "} ";
			std::cout << ".\n" <<std::endl;  
			j = -1;
			while (++j < 5)
				book[indx].tmp[j] = "";
			return;
		}
	}
	(!ctrd) && std::cout << std::endl;    
	i = -1;
	while (++i < 5 && ctrd)
		book[indx].info[i] = book[indx].tmp[i];
	(ctrd) && std::cout << "\n* The new contact was successfully saved! *\n" << std::endl;
	indx = (indx +1) %3; // change to 8
}

void Contact::_display()
{
	if (book[0].info[0].empty())
	{
		std::cout << "\n* You haven't any saved contact yet! *\n" << std::endl;
		return;
	}
	j = -1;
	while (++j < 3) // change to 8
	{
		i = -1;
		// (!book[j].info[0].empty()) && std::cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << std::endl;
		(!book[j].info[0].empty()) && std::cout << "*-------------------------------------------*" << std::endl;
		(!book[j].info[0].empty()) && std::cout << "|" << std::setw(10) << j + 1 ;
		while (++i < 3)
		{
			(!book[j].info[i].empty()) && std::cout << "|" << std::setw(10)  << book[j].info[i].substr(0,9); // left/right !!
			(book[j].info[i].length() > 9) && std::cout << ".";
		}
		(!book[j].info[0].empty()) && std::cout << "|"<<std::endl;    
	}
	std::cout << "*-------------------------------------------*" << std::endl;
	_search();
}

void Contact::_search(void)
	{
		std::cout << "Enter the index: ";
		std::getline(std::cin, hold);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return;
		}
		hold = trim(hold, " \t");
		i = atoi(hold.c_str());
		if (i < 1 || i > 8 || hold.length() > 1)
		{
			std::cout << "\n* The index must be a number between 1 to 8! *\n" << std::endl;
			return ;
		}
		(book[i - 1].info[0].empty()) && (std::cout << "\n* No contact saved in index " << i << " *\n" << std::endl);
		j = -1;
		while (++j < 5)
			(!book[i - 1].info[0].empty()) && std::cout << book[i - 1].field[j] << ": " << book[i - 1].info[j] << std::endl;
	}