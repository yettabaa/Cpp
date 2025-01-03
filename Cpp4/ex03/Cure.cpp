/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:10:19 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/15 19:11:56 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure& Cure::operator=(const Cure &overl)
{
    if (this != &overl)
        type = overl.type;
    return(*this);
}

Cure::Cure(const Cure &copy)
{
    *this = copy;
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
    return (new Cure);
}
