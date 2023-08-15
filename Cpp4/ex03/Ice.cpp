/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:55:07 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/14 22:14:53 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice& Ice::operator=(const Ice &overl)
{
    if (this != &overl)
        type = overl.type;
    return(*this);
}

Ice::Ice(const Ice &copy)
{
    *this = copy;
}

Ice::~Ice() {}

AMateria* AMateria::clone() const
{
    return (new Ice);
}
