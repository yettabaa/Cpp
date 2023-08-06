/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 07:44:02 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/05 21:17:47 by yettabaa         ###   ########.fr       */
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

void Harl::error_msg( void )
{
   std::cout << "Harl don't understand what do you want !" << std::endl;
}

void    Harl::complain( std::string level )
{
    int i = 0;
    std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
    // Harl test; // remove it
    void (Harl::*ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::error_msg};

    while (!str[i].empty() && str[i] != level)
        i++;
    (this->*ptr[i])();
    // (test.*ptr[i])(); // need declare the object of the member function 
}