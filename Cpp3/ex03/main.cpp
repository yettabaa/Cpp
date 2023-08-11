/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:20:07 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/11 19:37:34 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap enemie("enemie");
    DiamondTrap _default;
    
    enemie.whoAmI();
    _default.whoAmI();
    enemie.attack(_default._name());
    _default.takeDamage(enemie._damage());
    enemie.attack(_default._name());
    _default.takeDamage(enemie._damage());
    _default.beRepaired(40);
    _default.attack(enemie._name());
    enemie.takeDamage(_default._damage());
    _default.attack(enemie._name());
    enemie.takeDamage(_default._damage());
    return(0);
}