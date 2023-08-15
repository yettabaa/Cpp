/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:15:23 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/14 18:52:11 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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