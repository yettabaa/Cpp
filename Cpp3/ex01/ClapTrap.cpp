/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:20:03 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 23:47:35 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default") ,initial_health(10), initial_energy(10), attack_damage(0) 
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    health = initial_health;
    energy = initial_energy;
}

ClapTrap::ClapTrap(std::string name) : name(name) ,initial_health(10), initial_energy(10), attack_damage(0) 
{
    std::cout << "ClapTrap Parameterized constructor called" << std::endl;
    health = initial_health;
    energy = initial_energy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &overl)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (&overl != this)
    {
        this->name = overl.name;
        this->initial_health = overl.initial_health;
        this->initial_energy = overl.initial_energy;
        this->attack_damage = overl.attack_damage;
    }
    return(* this);
}

ClapTrap::ClapTrap (const ClapTrap &copy)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = copy;
}

void ClapTrap::attack(const std::string& target)
{
    if(!health)// negative
    {
        std::cout << "ClapTrap " << name << " he can't attak, he's dead!" << std::endl;
        return;
    }
    if(!energy)
    {
        std::cout << "ClapTrap " << name << " has no energy, he can't attak!" << std::endl;
        return;
    }
    energy--;           
    std::cout   << "ClapTrap " << name << " attacks "<< target 
                <<", causing " << attack_damage <<" points of damage!" 
                <<", health "<< health <<"/" << initial_health
                <<", Energy "<< energy <<"/" << initial_energy
                << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(!health)// negative
    {
        std::cout << "ClapTrap " << name << " he's already dead, he can't take damage!" << std::endl;
        return;
    }
    //gad msg
    health -= amount;
    std::cout   << "ClapTrap "<< name << " takeDomage "<< amount 
                <<", health "<< health <<"/" << initial_health
                <<", Energy "<< energy <<"/" << initial_energy
                << std::endl;
    if (health <= 0)
    {
        health = 0;
        std::cout << "ClapTrap " << name << " DEAD!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(!health)// negative
    {
       std::cout << "ClapTrap " << name << " he's already dead, he can't beRepaired!" << std::endl;
        return;
    }
    if(!energy)
    {
        std::cout << "ClapTrap " << name << " has no energy, he can't beRepaired" << std::endl;
        return;
    }
    //gad msg
    health += amount;
    energy--;
    (health > initial_health) && (health = initial_health);
    std::cout   << "ClapTrap "<< name << " beRepaired "<< amount 
                <<", health "<< health <<"/" << initial_health
                <<", Energy "<< energy <<"/" << initial_energy
                << std::endl;
}

void ClapTrap::_status()
{
    if (!health)
        std::cout << "\n" << "ClapTrap " << name << " DEAD !" << std::endl;
    std::cout   << "\n"<< "ClapTrap " <<name << " status:\nHealt: " << health 
                << " / Energy: " << energy << " / Attack_damage: " << attack_damage 
                << "\n" <<std::endl;
}

std::string ClapTrap::_name()
{
    return (name);
}

unsigned int ClapTrap::set_attack(long attack)
{
    attack_damage = attack;
    (attack_damage < 0) && (attack = 0);
    (attack_damage < initial_health) && (attack = initial_health);
    return(attack_damage);
}