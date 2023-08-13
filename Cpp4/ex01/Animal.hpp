/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:07:49 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/13 16:18:30 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iomanip>
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal& operator=(const Animal &overl);
    Animal(const Animal &copy);
    virtual~Animal();
    virtual void makeSound(void) const;
    const std::string& getType(void) const;
};

#include "Cat.hpp"
#include "Dog.hpp"

#endif