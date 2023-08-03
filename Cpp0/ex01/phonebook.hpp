/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:57:17 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/03 10:31:05 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOH_HPP
#define PHONEBOOH_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"
#include "utils.hpp"

class PhoneBook
{  
private:
	int i, j, indx, flag;
	std::string hold;
	Contact contact[8];
	
public:    
	PhoneBook();
	void _add();
	void _display();
	void _search(void);
};

#endif