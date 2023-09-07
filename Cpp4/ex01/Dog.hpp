/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:15:23 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/17 23:42:42 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* brain;
public:
    Dog();
    Dog& operator=(const Dog &overl);
    Dog(const Dog &copy);
    virtual ~Dog();
    virtual void makeSound(void) const;
    virtual void makeBrain(void) const;
};

#endif