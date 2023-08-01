/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 02:34:59 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/01 05:15:03 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *objs;
    std::string name;
    int nb;
    
    std::cout << "Entre the name: "; 
    std::cin >> name;
    if (name.length() > 42)
        return(std::cout << "The lenght max is 42" << std::endl, 1); 
    std::cout << "Entre how many zombie you want: "; 
    std::cin >> nb;
    if (nb <= 0 || nb > 1337)
        return(std::cout << "entre a number between 1 and 1337" << std::endl, 1); 
    objs = zombieHorde(nb, name);
    for(int i = 0; i < nb; i++)
        objs[i].announce();
    delete[] objs;
    return(0);
}