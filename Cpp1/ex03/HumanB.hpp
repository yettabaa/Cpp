/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:31:51 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/01 07:15:11 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    std::string type;
    Weapon weapon;
public:
    HumanB(std::string name):name(name){}
    // HumanB(void){}
    // ~HumanA();
    void setWeapon(Weapon new_Weapon)
    {
        weapon = new_Weapon;
    }
    void attack()
    {
        type = weapon.getType();
        std::cout << name << " attacks with their " << type << std::endl;
    }
};

// HumanA::HumanA(/* args */)
// {
// }

// HumanA::~HumanA()
// {
// }


#endif