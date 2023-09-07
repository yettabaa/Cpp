/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:07:49 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/17 02:35:58 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal& operator=(const AAnimal &overl);
    AAnimal(const AAnimal &copy);
    virtual~AAnimal();
    virtual void makeSound(void) const = 0;
    virtual void makeBrain(void) const = 0;
    const std::string& getType(void) const;
};

#endif