/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 04:36:43 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/03 04:36:51 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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