/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:20:07 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/12 18:40:22 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap enemie("enemie");
    DiamondTrap _default;
    
    enemie.whoAmI();
    _default.whoAmI();
    enemie.guardGate();
    _default.guardGate();
    enemie.highFivesGuys();
    _default.highFivesGuys();
    enemie.attack(_default._name());
    _default.takeDamage(enemie._damage());
    enemie.attack(_default._name());
    _default.takeDamage(enemie._damage());
    _default.beRepaired(40);
    _default.attack(enemie._name());
    enemie.takeDamage(_default._damage());
    _default.attack(enemie._name());
    enemie.takeDamage(_default._damage());
    enemie.takeDamage(_default._damage());
    enemie.takeDamage(_default._damage());
    enemie.whoAmI();
    return(0);
}