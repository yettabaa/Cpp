/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:17:52 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/11 19:01:55 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    initial_health = 100;
    initial_energy = 100;
    attack_damage = 30;
    health = initial_health;
    energy = initial_energy;
    name = "default";
}

FragTrap::FragTrap(const std::string &name)
{
    std::cout << "FragTrap Parameterized constructor called" << std::endl;
    initial_health = 100;
    initial_energy = 100;
    attack_damage = 30;
    health = initial_health;
    energy = initial_energy;
    this->name = name;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &overl)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &overl)
    {
        this->name = overl.name;
        this->initial_health = overl.initial_health;
        this->initial_energy = overl.initial_energy;
        this->attack_damage = overl.attack_damage;
        this->health = overl.health;
        this->energy = overl.energy;
    }
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if(!health)
    {
       std::cout << name << " he's already dead, he can't high fives." << std::endl;
        return;
    }
    if(!energy)
    {
        std::cout << name << " has no energy, he can't high fives." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " high fives." << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(!health)
    {
        std::cout << "FragTrap " << name << " he can't attak, he's dead!" << std::endl;
        return;
    }
    if(!energy)
    {
        std::cout << "FragTrap " << name << " has no energy, he can't attak!" << std::endl;
        return;
    }
    energy--;           
    std::cout   << "FragTrap " << name << " attacks "<< target 
                <<", causing " << attack_damage <<" points of damage!" 
                <<", health "<< health <<"/" << initial_health
                <<", Energy "<< energy <<"/" << initial_energy
                << std::endl;
}
