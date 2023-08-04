/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 02:35:06 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/04 02:05:00 by yettabaa         ###   ########.fr       */
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
    Zombie(void){} //defaulte constructor
    ~Zombie();
    void announce( void );
    void set( std::string new_name );
};
Zombie*    zombieHorde( int N, std::string name );

#endif