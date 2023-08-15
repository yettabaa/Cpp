/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:32:48 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/14 22:01:34 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria& AMateria::operator=(const AMateria &overl)
{
    if (this != &overl)
        type = overl.type;
    return (*this);    
}

AMateria::AMateria(const AMateria &copy) 
{
    *this = copy;
}

AMateria::~AMateria() {}