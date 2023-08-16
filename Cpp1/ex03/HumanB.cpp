/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:31:48 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 17:28:11 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):name(name)
{
    std::cout << "HumanB Constructor called" <<std::endl;
    weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Destructor called" <<std::endl;
}

void HumanB::setWeapon(Weapon &new_Weapon)
{
    weapon = &new_Weapon;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << "HumanB can't attack, he don't has a weapon" << std::endl;    
}