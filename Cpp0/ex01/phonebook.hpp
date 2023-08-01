/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:57:17 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/01 05:18:49 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOH_HPP
#define PHONEBOOH_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#define TRUE 1
#define FALSE 0
#define NOTDIGIT 2

std::string _check(int field, int *flag);
std::string trim(std::string str, std::string str1);

class PhoneBook
{
public:
	std::string field[5];
	std::string info[5];
	std::string tmp[5];
	PhoneBook()
	{
		field[0] = "first name";
		field[1] = "last name";
		field[2] = "nickname";
		field[3] = "phone number";
		field[4] = "darkest secret";
	}
};

class Contact
{  
private:
	int i, j, indx, ctrd;
	std::string hold;
	PhoneBook book[8];
public:    
	Contact() {indx = 0;}
	void _add();
	void _display();
	void _search(void);
};

#endif