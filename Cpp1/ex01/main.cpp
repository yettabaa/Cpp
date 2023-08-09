/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 02:34:59 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/07 19:33:47 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name );

int main()
{
    Zombie *objs;
    std::string name;
    std::string hold;
    std::stringstream trans;
    int nb;
    
    std::cout << "Entre the name: "; 
    std::getline(std::cin, name);
    if (std::cin.eof())
        return (std::cout << std::endl ,0);
    if (name.length() > 42)
        return(std::cout << "The lenght max is 42" << std::endl, 1); 
    std::cout << "Entre how many zombie you want: "; 
    std::getline(std::cin, hold);
    if (std::cin.eof())
        return (std::cout << std::endl ,0);
    trans << hold;
    trans >> nb;    
    if (nb <= 0 || nb > 1337)
        return(std::cout << "entre a number between 1 and 1337" << std::endl, 1); 
    objs = zombieHorde(nb, name);
    for(int i = 0; i < nb; i++)
        objs[i].announce();
    delete[] objs;
    return(0);
}
