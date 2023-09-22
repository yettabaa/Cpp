/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:40:33 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/22 00:14:04 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
private:
    unsigned int N;
    std::vector<int> hold;
public:
    Span();
    Span(unsigned int N);
    Span& operator=(const Span& overl);
    Span(const Span& copy);
    ~Span();
    void addNumber(int span);
    int shortestSpan();
    int longestSpan();
    void addSequence(int *tab, unsigned int size);
};

#endif