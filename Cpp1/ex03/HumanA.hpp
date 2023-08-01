/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:31:45 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/01 08:32:31 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    std::string type;
    Weapon weapon;
public:
    HumanA(std::string name, Weapon weapon):name(name), weapon(weapon){}
    // HumanA(void){}
    // ~HumanA();
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