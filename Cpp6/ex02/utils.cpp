/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:48:40 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/16 04:49:56 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "iostream"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
//dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting
Base * generate(void)
{
	int random;

	std::srand(std::time(NULL));
	random  = std::rand() % 3;
	if (!random)
		return (std::cout << "A generated" << std::endl,new A);
	else if (random == 1)
		return (std::cout << "B generated" << std::endl, new B);
	else
		return (std::cout << "C generated" << std::endl, new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The actual type is: A" << std::endl;
	else if  (dynamic_cast<B*>(p))
		std::cout << "The actual type is: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The actual type is: C" << std::endl;
}

void identify(Base& p)
{
	try {
		if (dynamic_cast<A&>(p))
			throw "The actual type is: A";
		else if  (dynamic_cast<B&>(p))
			throw "The actual type is: B";
		else if (dynamic_cast<C&>(p))
			throw "The actual type is: C";
	}
	catch (const char* str) {
		std::cout << str << std::endl;
	}
}
