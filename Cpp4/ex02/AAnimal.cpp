/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:07:46 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/14 18:58:41 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &overl)
{
    std::cout << "AAnimal Copy assignment operator called" << std::endl;
    if (this != &overl)
        type = overl.type;
    return(*this);    
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << "AAnimal Copy constructor called" << std::endl;
    *this = copy;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}

// void AAnimal::makeSound(void) const
// {
//     std::cout << std::endl;
// }

// void AAnimal::makeBrain(void) const
// {
    
// }

const std::string& AAnimal::getType(void) const
{
    return(type);
}
