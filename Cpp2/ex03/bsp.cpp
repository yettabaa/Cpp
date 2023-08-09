/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:50:17 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 21:33:13 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point p1, Point p2, Point p3)
{
    Fixed a;

    a = p1._x() * (p2._y() - p3._y()) + p2._x() * (p3._y() - p1._y()) + p3._x() * (p1._y() - p2._y());
    if (a < Fixed(0))
        a = Fixed(-1) * a;
    // a = Fixed(.5f) * a;
    return(a);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    
    // if (point == a || point == b || point == c || area(a, b, c) == Fixed(0)) // the point is a vertex
    //     return(false);
    if (area(a, b, point) == Fixed(0) || area(a, c, point) == Fixed(0) || area(b, c, point) == Fixed(0)) // on edge/vertex
        return(false);
    // std::cout << area(a, b, c) << std::endl;  
    // std::cout << area(a, b, point) << std::endl;  
    // std::cout << area(a, c, point) << std::endl;  
    // std::cout << area(b, c, point) << std::endl;
    //All results are negative or positive.The point is inside the triangle
    //We have both positive and negative results.The point is outside the triangle.
    // or with some 
    if (area(a, b, c) != (area(a, b, point) + area(a, c, point) + area(b, c, point)))
        return(false);
    return(true);
}