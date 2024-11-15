/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 07:44:07 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/05 16:41:16 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//Harl has to ==> complain without using a forest of if/else if/else. It doesn’t think twice!
int main(int ac, char **av)
{
    Harl harl;
    void (Harl::* ptr)(std::string);
    
    if (ac != 2)
    {
        std::cerr << "invalid number of argument!" << std::endl;
        return (1);
    }
    ptr = &Harl::complain;
    (harl.*ptr)(av[1]);
    return(0);
}