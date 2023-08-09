/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:17:10 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 19:44:16 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fract = 8;

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
    *this = copy;
    // operator=(copy);
        // fixed_point = copy.getRawBits();
}

Fixed::Fixed(const int fixed_point) : fixed_point(fixed_point << fract)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floating_point) : fixed_point(roundf(floating_point * (1 << fract)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &overl)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (&overl != this)
        setRawBits(overl.fixed_point);
    return(* this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)fixed_point / (float)(1 << fract));
}

int Fixed::toInt( void ) const
{
    return(fixed_point >> fract);
}

std::ostream& operator<<(std::ostream& out, const Fixed& over)
{
    out << over.toFloat();
    return(out);
}
