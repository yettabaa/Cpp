/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:59 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/05 20:36:45 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char  *av[])
{
    try
    {
        if (ac < 3)
			throw std::runtime_error("invalid number of argument!");

        PmergeMe(av +1, ac);//
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
