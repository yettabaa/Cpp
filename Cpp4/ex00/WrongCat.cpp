/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:17:07 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/16 22:52:10 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat& WrongCat::operator=(const WrongCat &overl)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    if (this != &overl)
        type = overl.type;
    return (*this);
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCatSound" << std::endl;
}