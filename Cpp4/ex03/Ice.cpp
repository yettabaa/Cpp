/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:55:07 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/15 17:36:30 by yettabaa         ###   ########.fr       */
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

AMateria* Ice::clone() const
{
    return (new Ice);
}

