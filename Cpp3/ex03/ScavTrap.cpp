/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:25:03 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/12 18:26:30 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    initial_health = 100;
    initial_energy = 50;
    attack_damage = 20;
    health = initial_health;
    energy = initial_energy;
    name = "default";
}

ScavTrap::ScavTrap(const std::string &name)
{
    std::cout << "ScavTrap Parameterized constructor called" << std::endl;
    initial_health = 100;
    initial_energy = 50;
    attack_damage = 20;
    health = initial_health;
    energy = initial_energy;
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
        name = overl.name;
        initial_health = overl.initial_health;
        initial_energy = overl.initial_energy;
        attack_damage = overl.attack_damage;
        health = overl.health;
        energy = overl.energy;
    }
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    if(!health)
    {
       std::cout << name << " he's already dead, he can't been in Gate keeper mode." << std::endl;
        return;
    }
    if(!energy)
    {
        std::cout << name << " has no energy, he can't been in Gate keeper mode." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(!health)
    {
        std::cout << "ScavTrap " << name << " he can't attak, he's dead!" << std::endl;
        return;
    }
    if(!energy)
    {
        std::cout << "ScavTrap " << name << " has no energy, he can't attak!" << std::endl;
        return;
    }
    energy--;           
    std::cout   << "ScavTrap " << name << " attacks "<< target 
                <<", causing " << attack_damage <<" points of damage!" 
                <<", health "<< health <<"/" << initial_health
                <<", Energy "<< energy <<"/" << initial_energy
                << std::endl;
}
