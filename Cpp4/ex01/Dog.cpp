/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:17:01 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/17 23:48:57 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    brain = new Brain("Dog");
    type = "Dog";
}

Dog& Dog::operator=(const Dog &overl)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &overl)
    {
        delete brain;
        type = overl.type;
        brain = new Brain;
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
    std::cout << "Dog Destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound(void) const
{
    std::cout << "DogSound" << std::endl;
}

void Dog::makeBrain(void) const
{
    std::cout << "Brain Dog:" << std::endl;
    brain->makeBrain();    
}

