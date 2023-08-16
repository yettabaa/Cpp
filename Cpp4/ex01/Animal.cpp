/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:07:46 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 22:06:24 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &overl)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this != &overl)
        type = overl.type;
    return(*this);    
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << std::endl;
}

void Animal::makeBrain(void) const
{
    
}

const std::string& Animal::getType(void) const
{
    return(type);
}
