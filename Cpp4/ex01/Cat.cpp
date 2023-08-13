/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:01:09 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/13 23:30:25 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    brain = new(std::nothrow) Brain;
    if (!brain)
        exit(1);
    std::cout << "Cat Default constructor called" << std::endl;
    type = "Cat";
}

Cat& Cat::operator=(const Cat &overl)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
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

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "CatSound" << std::endl;
}