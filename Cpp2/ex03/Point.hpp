/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:50:13 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 21:30:05 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <sstream>

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();    
    ~Point();
    Point(const float x, const float y);
    Point(Point const &copy);
    Point& operator=(Point const &overl);
    const Fixed& _x();
    const Fixed& _y();
    // bool operator==(Point const &point) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif