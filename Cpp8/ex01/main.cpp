/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:40:28 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/22 02:51:37 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main() 
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6); 
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9); 
        sp.addNumber(11);
        // sp.addNumber(11);
        Span sp2(100000);
        int tab[10] = ;
        srand(time(NULL));
        for (int i = 0; i < 10; i++)
            tab[i] = std::abs(rand());
        sp2.addSequence(tab, sizeof(tab) / sizeof(int));
        // swab tablo 7et fih random value u qarn dakshi wach huwa li t7et
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
        // std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl;
        return 0;
}