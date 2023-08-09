/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:31:38 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 12:48:19 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() 
{
    //By using allocation or refrence, you ensure that the club 
    //object exists throughout the lifetime of the bob
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club); // we put here a refrence
        bob.attack();
        club.setType("some other type of club"); // so we can edite 
        bob.attack();
    } 
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim .attack();
    }
    return 0; 
}