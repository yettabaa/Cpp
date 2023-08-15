/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:07:49 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/14 18:58:20 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iomanip>
#include <iostream>

// 1. A class is abstract if it has at least one pure virtual function.

// 2. We can have pointers and references of abstract class type.

/* 3. If we do not override the pure virtual function in the derived class, 
    then the derived class also becomes an abstract class. */

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal& operator=(const AAnimal &overl);
    AAnimal(const AAnimal &copy);
    virtual~AAnimal();
    virtual void makeSound(void) const = 0; // pure virtual function or abstract function
    virtual void makeBrain(void) const = 0;
    const std::string& getType(void) const;
};

#include "Cat.hpp"
#include "Dog.hpp"

#endif