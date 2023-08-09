/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:31:54 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 12:45:23 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weptype):type(weptype)
{
    std::cout << "Weapon Constructor called" <<std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor called" <<std::endl;
}

void Weapon::setType(const std::string &newType)
{
    type = newType;
}
const std::string& Weapon::getType() 
{
    return(type);
}