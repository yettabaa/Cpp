/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:17:10 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/04 09:28:41 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    fixed_point = copy.getRawBits();
}

Fixed& Fixed::operator=(Fixed &overl)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (&overl != this)
        this->fixed_point = overl.getRawBits();
    return(* this);
}

int Fixed::getRawBits( void ) const // const ??
{
    std::cout << "getRawBits member function called" << std::endl;
    return(fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
}