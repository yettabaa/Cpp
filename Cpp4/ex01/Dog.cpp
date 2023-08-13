/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:17:01 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/13 23:54:27 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    brain = new(std::nothrow) Brain("Dog");
    if (!brain)
        exit(1);
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
}

Dog& Dog::operator=(const Dog &overl)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &overl)
    {
        type = overl.type;
        brain = new(std::nothrow) Brain;
        if (!brain)
             exit(1);
        *brain = *overl.brain;
    }
    return (*this);
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "DogSound" << std::endl;
}

void Dog::make_brain()
{
    for(int i = 0; i < 100; i++)
        std::cout << brain->ideas[i] << " ";
}