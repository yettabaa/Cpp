/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:50:10 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 21:50:33 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {} 

Point::~Point(){}

Point::Point(const float x, const float y): x(x), y(y) {}

const Fixed& Point::_x()
{
    return(x);
}

const Fixed& Point::_y()
{
    return(y);
}

Point::Point(Point const &copy) : x(Fixed(copy.x)), y(Fixed(copy.y)) {}

Point& Point::operator=(Point const &overl)
{
    (void)overl;
    return(* this);
}

// bool Point::operator==(Point const &point) const
// {
//     if (this->x == point.x && this->y == point.y)
//         return(true);
//     return(false);    
// }