/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:48:40 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/17 01:25:59 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "iostream"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// #include <random>

//dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting
Base * generate(void)
{
	int random;

	std::srand(std::time(NULL));
	random  = std::rand() % 3;
	// std::random_device rd;
    // std::mt19937 gen(rd());
    // std::uniform_int_distribution<int> dist(0, 2);
    // int random = dist(gen);
	
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
	else if (dynamic_cast<B*>(p))
		std::cout << "The actual type is: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The actual type is: C" << std::endl;
}

void identify(Base& p)
{
	static int i;
	try {
		if (i == 0)
		{
			A a = dynamic_cast<A&>(p);
			std::cout << "The actual type is: A" << std::endl;
		}
		if (i == 1)
		{
			B b = dynamic_cast<B&>(p);
			std::cout << "The actual type is: B" << std::endl;
		}
		if (i == 2)
		{
			C c = dynamic_cast<C&>(p);
			std::cout << "The actual type is: C" << std::endl;
		}
		i = 0;
	}
	  catch (std::exception& e) {
		(void)e;
		i++;
		identify(p);
    }
}
