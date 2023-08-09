/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:25:03 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 23:55:46 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    initial_health = 100;
    initial_energy = 50;
    attack_damage =20;
    name = "default";
}

ScavTrap::ScavTrap(std::string &name)
{
    std::cout << "ScavTrap Parameterized constructor called" << std::endl;
    initial_health = 100;
    initial_energy = 50;
    attack_damage =20;
    this->name = name;
}

ScavTrap::ScavTrap (const ScavTrap &copy)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &overl)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &overl)
    {
        initial_health = overl.initial_health;
        initial_energy = overl.initial_energy;
        attack_damage = overl.attack_damage;
        name = overl.name;
    }
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}