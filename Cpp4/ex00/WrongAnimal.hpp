/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:18:50 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 21:21:59 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iomanip>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal &overl);
    WrongAnimal(const WrongAnimal &copy);
    ~WrongAnimal();
    void makeSound(void) const;
    const std::string& getType(void) const;
};

#include "WrongCat.hpp"

#endif