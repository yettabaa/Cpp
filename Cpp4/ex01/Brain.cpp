/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:39:44 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/17 23:52:53 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const std::string &name)
{
    std::cout << "Brain Default constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
            ideas[i] = name ; 
}

Brain& Brain::operator=(const Brain &overl)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this != &overl)
    {
        for(int i = 0; i < 100; i++)
            ideas[i] = overl.ideas[i];
    }
    return(*this);
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

void Brain::makeBrain(void) const
{
    for(int i = 0; i < 100; i++)
        std::cout << ideas[i] << " ";
    std::cout << std::endl;       
}