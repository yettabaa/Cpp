/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:16:58 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/09 21:46:12 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{ 
    float point[8];
    std::string hold;
    std::string hold1;
    std::stringstream trans[8];
    std::string str[] = {"vertex a", "vertex b", "vertex c", "point"};
    
    for(int i = 0; i < 4; i++)
    {
        std::cout << "Entre " << str[i] << ": \nx = ";
        std::getline(std::cin, hold);
        if (std::cin.eof())
            return (std::cout << std::endl ,0);
        trans[i * 2] << hold;
        trans[i * 2] >> point[i * 2];  
        std::cout << "y = " ;
        std::getline(std::cin, hold);
        if (std::cin.eof())
            return (std::cout << std::endl ,0);
        trans[(i * 2) + 1] << hold;
        trans[(i * 2) + 1] >> point[(i * 2) + 1];  
    }
    if (bsp(Point(point[0], point[1]), Point(point[2], point[3]), Point(point[4], point[5]), Point(point[6], point[7])))
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle." << std::endl;
    // for(int i = 0 ;i < 8; i++)
    // {
    //     std::cout << point[i] << std::endl;
    // }
    // std::cout << bsp(Point(7,7), Point(11, 2), Point(2, 2), Point(9.66f, 2.01)) << std::endl;    
    return 0; 
}