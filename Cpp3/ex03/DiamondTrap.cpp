/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:52:11 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/15 23:34:00 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    initial_health = 100;
    initial_energy = 50;
    attack_damage = 30;
    health = initial_health;
    energy = initial_energy;
    ClapTrap::name = "default_clap_name";
    this->name = "default";
}

DiamondTrap::DiamondTrap(const std::string &name)
{
    std::cout << "DiamondTrap Parameterized constructor called" << std::endl;
    initial_health = 100;
    initial_energy = 50;
    attack_damage = 30;
    health = initial_health;
    energy = initial_energy;
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    // std::cout << &name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &overl)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this != &overl)
    {
        name = overl.name;
        initial_health = overl.initial_health;
        initial_energy = overl.initial_energy;
        attack_damage = overl.attack_damage;
        health = overl.health;
        energy = overl.energy;
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
    if(!health)
    {
       std::cout << name << " " << ClapTrap::_name() << " he's already dead." << std::endl;
        return;
    }
    if(!energy)
    {
        std::cout << name << " " << ClapTrap::_name() << " has no energy." << std::endl;
        return;
    }
    std::cout << "I am " << name << " " << ClapTrap::_name() << std::endl;
}