/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 04:36:55 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 12:55:40 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout   << "[ DEBUG ]\n"
                << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- "
                << "ketchup burger.\nI really do!\n" 
                << std::endl;
}

void Harl::info( void )
{
    std::cout   << "[ INFO ]\n"
                << "I cannot believe adding extra bacon costs more money.\n"
                << "You didn’t put enough bacon in my burger! If you did, "
                << "I wouldn’t be asking for more!\n" 
                << std::endl;
}

void Harl::warning( void )
{
    std::cout   << "[ WARNING ]\n"
                << "I think I deserve to have some extra bacon for free.\n"
                << "I’ve been coming for years whereas you "
                << "started working here since last month.\n" 
                << std::endl;
}

void Harl::error( void )
{
   std::cout    <<  "[ ERROR ]\n"
                << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::error_msg( void )
{
   std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void    Harl::complain( std::string level )
{
    int i = 0;
    std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
    void (Harl::*ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::error_msg};

    while (!str[i].empty() && str[i] != level)
        i++;
    switch (i)
    {
        case 0:
            (this->*ptr[0])();
        case 1:
            (this->*ptr[1])();
        case 2:
            (this->*ptr[2])();
        case 3:
            (this->*ptr[3])();
            break;
        default:
            (this->*ptr[4])();
    }
}