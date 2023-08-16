/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:17:01 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 19:38:29 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
}

Dog& Dog::operator=(const Dog &overl)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &overl)
        type = overl.type;
    return (*this);
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "DogSound" << std::endl;
}