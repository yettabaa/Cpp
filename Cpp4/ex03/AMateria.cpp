/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:32:48 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/15 19:19:12 by yettabaa         ###   ########.fr       */
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

void AMateria::use(ICharacter& target) // need to overloded?
{
    if (type == "ice")
        std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
    else if (type == "cure")    
        std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}
