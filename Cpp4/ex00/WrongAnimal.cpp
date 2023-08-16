/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:18:57 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 19:35:19 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &overl)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    if (this != &overl)
        type = overl.type;
    return(*this);    
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "~ ~" << std::endl;
}

const std::string& WrongAnimal::getType(void) const
{
    return(type);
}