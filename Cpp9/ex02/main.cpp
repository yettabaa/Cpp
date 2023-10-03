/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:59 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/03 12:22:03 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char  *av[])
{
    (void)av;
    try
    {
        if (ac < 2)
			throw std::runtime_error("invalid number of argument!");
        v_int tab(parsing(av +1, ac));
        v_int so = sort(tab);
        for(int i=0; i < ac-1; i++)
            std::cout << so[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
