/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:01:09 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 04:13:04 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    brain = new Brain("Cat");
    type = "Cat";
}

Cat& Cat::operator=(const Cat &overl)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &overl)
    {
        delete brain;
        brain = nullptr;
        type = overl.type;
        brain = new Brain;
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
    std::cout << "Cat Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "CatSound" << std::endl;
}

void Cat::makeBrain(void) const
{
    std::cout << "Brain Cat:" << std::endl;
    for(int i = 0; i < 100; i++)
        std::cout << brain->ideas[i] << " ";
    std::cout << std::endl;       
}