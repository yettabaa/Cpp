/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:20:09 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/12 18:03:49 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iomanip"
#include"iostream"

class ClapTrap
{
protected:
    std::string name;
    long initial_health;
    long initial_energy; 
    long attack_damage; 
    long health;
    long energy;
public:
// a default constructor necessary here ?
    ClapTrap();
    ClapTrap (const std::string &name);
    ClapTrap &operator=(const ClapTrap &overl);
    ClapTrap (const ClapTrap &copy);
    ~ClapTrap ();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    long _damage();
    std::string _name();
    void set_attack(long attack);
};




#endif