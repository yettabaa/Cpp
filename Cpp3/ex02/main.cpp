/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:20:07 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/11 17:45:47 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap enemie("enemie");
    FragTrap _default;
    
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
    return(0);
}