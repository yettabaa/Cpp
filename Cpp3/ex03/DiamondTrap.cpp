/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:52:11 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/11 23:24:36 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    initial_health = FragTrap::initial_health;
    initial_energy = ScavTrap::initial_energy;
    attack_damage = FragTrap::attack_damage;
    health = initial_health;
    energy = initial_energy;
    name = "default";
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name +  "_clap_name")
{
    std::cout << "DiamondTrap Parameterized constructor called" << std::endl;
    // std::cout << FragTrap::attack_damage << std::endl;
    initial_health = FragTrap::initial_health;
    initial_energy = ScavTrap::initial_energy;
    attack_damage = FragTrap::attack_damage;
    health = initial_health;
    energy = initial_energy;
    this->name = name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &overl)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this != &overl)
    {
        this->name = overl.name;
        this->initial_health = overl.initial_health;
        this->initial_energy = overl.initial_energy;
        this->attack_damage = overl.attack_damage;
        this->health = overl.health;
        this->energy = overl.energy;
    }
    return(* this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    // std::cout << FragTrap::attack_damage << std::endl;
    std::cout << "I am " << name << " " << ClapTrap::_name() << std::endl;
}