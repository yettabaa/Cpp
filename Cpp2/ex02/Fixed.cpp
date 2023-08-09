/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:17:10 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 20:23:04 by yettabaa         ###   ########.fr       */
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

int Fixed::getRawBits( void ) const // const ??
{
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

bool Fixed::operator>(const Fixed& obj) const
{
    return(this->fixed_point > obj.fixed_point);
}

bool Fixed::operator<(const Fixed& obj) const
{
    return(this->fixed_point < obj.fixed_point);
}

bool Fixed::operator>=(const Fixed& obj) const
{
    return(this->fixed_point >= obj.fixed_point);
}

bool Fixed::operator<=(const Fixed& obj) const
{
    return(this->fixed_point <= obj.fixed_point);
}

bool Fixed::operator==(const Fixed& obj) const
{
    return(this->fixed_point == obj.fixed_point);
}

bool Fixed::operator!=(const Fixed& obj) const
{
    return(this->fixed_point != obj.fixed_point);
}

Fixed Fixed::operator+(const Fixed& obj) const
{
    return(Fixed((this->fixed_point  + obj.fixed_point) / (float)(1 << fract)));
}

Fixed Fixed::operator-(const Fixed& obj) const
{
    return(Fixed((this->fixed_point  - obj.fixed_point) / (float)(1 << fract)));
}

Fixed Fixed::operator*(const Fixed& obj) const
{
    return(Fixed((this->fixed_point / (float)(1 << fract)) * (obj.fixed_point / (float)(1 << fract))));
}

Fixed Fixed::operator/(const Fixed& obj) const
{
    return(Fixed((this->fixed_point / (float)(1 << fract)) / (obj.fixed_point / (float)(1 << fract))));
}

Fixed& Fixed::operator++()
{
    this->fixed_point++; 
    return(*this);
}

Fixed& Fixed::operator--()
{
    this->fixed_point--; 
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->fixed_point++; // the object a is increment here but we return the copy of a befor increment
    return(tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->fixed_point--; // same think here
    return(tmp);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return(a);
    return(b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a > b)
        return(a);
    return(b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return(a);
    return(b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return(a);
    return(b);
}
