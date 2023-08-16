/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:32:48 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 22:21:38 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() 
{
    std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria Parameterized constructor called" << std::endl;
    this->type = type;
}

AMateria& AMateria::operator=(const AMateria &overl)
{
    std::cout << "AMateria Copy assignment operator called" << std::endl;
    if (this != &overl)
        type = overl.type;
    return (*this);    
}

AMateria::AMateria(const AMateria &copy) 
{
    std::cout << "AMateria Copy constructor called" << std::endl;
    *this = copy;
}

AMateria::~AMateria() 
{
    std::cout << "AMateria Destructor called" << std::endl;
}


std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    if (type == "ice")
        std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
    else if (type == "cure")    
        std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
    else
        std::cout << "* new matria "<< target.getName() << " *" << std::endl; //
            
}
