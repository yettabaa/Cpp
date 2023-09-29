/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:40:28 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/29 02:54:28 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main() 
{
    try
    {
        std::cout << "* Span for 5 numbers *" <<std::endl;
        Span sp = Span(5);
        sp.addNumber(6); 
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9); 
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        sp.printS();
        std::cout << "* Span for sequence of 10 numbers *" <<std::endl;
        Span sp1(10);
        int tab1[10] = {4,1,2,5,4,10,11,20,90,7};
        // std::cout << "size = "<<sizeof(tab1) / sizeof(int) <<'\n'; //!!
        sp1.addSequence(tab1, sizeof(tab1) / sizeof(int));
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
        sp1.printS();
        std::cout << "* Span for sequence of 10 000 numbers *" <<std::endl;
        Span sp2(10000);
        int *tab2 = new int[10000];
            srand(time(NULL));
        for (int i = 0; i < 10000; i++) {
            tab2[i] = std::abs(rand());
        }
        sp2.addSequence(tab2, 10000);
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
        // sp2.printS();
        delete[]tab2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
        // std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl;
        return 0;
}