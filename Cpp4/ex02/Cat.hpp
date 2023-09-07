/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:59:56 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/17 02:36:26 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    Brain* brain;
public:
    Cat();
    Cat& operator=(const Cat &overl);
    Cat(const Cat &copy);
    virtual ~Cat();
    virtual void makeSound(void) const;
    virtual void makeBrain(void) const;
};

#endif