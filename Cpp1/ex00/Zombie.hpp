/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 01:15:13 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/01 02:31:24 by yettabaa         ###   ########.fr       */
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
    ~Zombie();
    void announce( void );
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif