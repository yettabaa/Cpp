/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 02:35:06 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/01 04:57:56 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(const std::string name);
    Zombie(void){} //defaulte constructor
    void announce( void );
};
Zombie*    zombieHorde( int N, std::string name );

#endif