/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:20:07 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 22:57:04 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap test("test");
    ClapTrap def;
    
    test.attack(def._name());
    def.takeDamage(test.set_attack(8));
    def.beRepaired(6);
    def.attack(test._name());
    test.takeDamage(def.set_attack(8));
    test.beRepaired(6);
    test.attack(def._name());
    def.takeDamage(test.set_attack(8));
    return(0);   
}