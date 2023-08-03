/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 01:14:56 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/03 11:11:03 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    Zombie *s;
    std::string hold;
    
    std::cout << "Entre a name of your choice: ";
    if (!std::getline(std::cin, hold) && std::cin.eof())
    {
        std::cout << std::endl;
        exit(1);
    }
    randomChump(hold);
    s = newZombie(hold);
    s->announce();
    delete s;
    return (0);
}