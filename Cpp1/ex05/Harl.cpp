/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 07:44:02 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/03 04:54:03 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- "
              << "ketchup burger. I really do!" 
              << std::endl;
}

void Harl::info( void )
{
    std::cout   << "I cannot believe adding extra bacon costs more money. "
                << "You didn’t put enough bacon in my burger! If you did, "
                << "I wouldn’t be asking for more!" 
                << std::endl;
}

void Harl::warning( void )
{
    std::cout   << "I think I deserve to have some extra bacon for free. "
                << "I’ve been coming for years whereas you "
                << "started working here since last month." 
                << std::endl;
}

void Harl::error( void )
{
 
   std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
    int i = 0;
    std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    while (!str[i].empty() && str[i] != level)
        i++; 
    if (i > 4)
    {
        std::cout << "Harl don't understand what do you want !" << std::endl;
        return ;
    }
    (this->*ptr[i])();
}