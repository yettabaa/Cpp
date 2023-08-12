/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:20:07 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/12 18:22:07 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap enemie("enemie");
    ClapTrap _default;
    
    enemie.set_attack(8);
    _default.set_attack(8);
    enemie.attack(_default._name());
    _default.takeDamage(enemie._damage());
    _default.beRepaired(6);
    _default.attack(enemie._name());
    enemie.takeDamage(_default._damage());
    enemie.beRepaired(6);
    enemie.attack(_default._name());
    _default.takeDamage(enemie._damage());
    return(0);
}