/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:32:48 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 22:48:22 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria& AMateria::operator=(const AMateria &overl)
{
    if (this != &overl)
        type = overl.type;
    return (*this);    
}

AMateria::AMateria(const AMateria &copy) 
{
    *this = copy;
}

AMateria::~AMateria() {}


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
