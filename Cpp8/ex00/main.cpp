/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:22:45 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/21 01:01:20 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        int tab[] = {14, 5, 3, 5, 10};
        std::vector<int> vec_int(tab, tab + (sizeof(tab) / sizeof(int)));
        
        std::cout << easyfind(vec_int, 3) << std::endl;
        std::cout << easyfind(vec_int, 50) << std::endl;
    }
    catch(const char * e)
    {
        std::cerr << e << std::endl;
    }
    
}