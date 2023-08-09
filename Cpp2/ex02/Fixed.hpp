/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:17:05 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 21:56:00 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fixed_point;
    static const int fract;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& copy);
    Fixed(const int fixed_point);
    Fixed(const float floating_point);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    Fixed& operator=(const Fixed &overl); // !! need const ???
    int toInt( void ) const;
    // the left is * this and the right is obj
    bool operator>(const Fixed& obj) const; // when we use conts we dont need to cast this
    bool operator<(const Fixed& obj) const;
    bool operator>=(const Fixed& obj) const;
    bool operator<=(const Fixed& obj) const;
    bool operator==(const Fixed& obj) const;
    bool operator!=(const Fixed& obj) const;
    
    Fixed operator+(const Fixed& obj) const;
    Fixed operator-(const Fixed& obj) const;
    Fixed operator*(const Fixed& obj) const;
    Fixed operator/(const Fixed& obj) const;
    
    Fixed& operator++();// !! we need the const ??
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed& a, Fixed& b);  
};

std::ostream& operator<<(std::ostream& out, const Fixed& over);

#endif