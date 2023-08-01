/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:31:57 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/01 08:30:19 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type):type(type){}
    Weapon(){}
    void setType( std::string new_type)
    {
        std::string *ref = &getType();
        *ref = new_type;
        // ref = &getType();
        // std::cout << &getType() <<std::endl;
        // std::cout << &ref <<std::endl;
        // new_type = getType();
        std::cout << "type " << ref <<std::endl;
    }
    std::string& getType()
    {
        std::cout << "++> " << &type <<std::endl;
        return(type);
    }
    // ~Weapon();
};

// Weapon::Weapon()
// {
// }

// Weapon::~Weapon()
// {
// }


#endif