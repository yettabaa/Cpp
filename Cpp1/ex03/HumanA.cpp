/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:31:42 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/02 01:44:28 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string hum_name,  Weapon &hum_weapon):name(hum_name), weapon(hum_weapon){}
void HumanA::attack()
{
    std::cout << name << " attacks with their " <<  weapon.getType() << std::endl;
}