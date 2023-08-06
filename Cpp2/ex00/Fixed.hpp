/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:17:05 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/06 18:14:13 by yettabaa         ###   ########.fr       */
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
    Fixed& operator=(const Fixed &overl);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};


#endif