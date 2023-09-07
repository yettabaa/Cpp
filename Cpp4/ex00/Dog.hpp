/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:15:23 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/17 02:27:02 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog& operator=(const Dog &overl);
    Dog(const Dog &copy);
    virtual ~Dog();
    virtual void makeSound(void) const;
};

#endif