/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:40:31 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/27 00:29:58 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <numeric>

Span::Span() : N(0) {}

Span::Span(unsigned int N) : N(N) {}

Span& Span::operator=(const Span& overl)
{
	N = overl.N;
	hold = overl.hold;
	return(*this);
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span::~Span() {}

void Span::addNumber(int span)
{
	// std::cout << static_cast<unsigned int>(hold.size()) <<'\n';
	if (static_cast<unsigned int>(hold.size()) == N)
		throw std::runtime_error("You can't add this number, you attained the maximum capacity.");
	hold.insert(hold.end(), span);
	std::sort(hold.begin(), hold.end()); 
}

 int Span::shortestSpan()
{
	if (hold.size() < 2)
		throw std::runtime_error("you should have at least 2 number.");
	std::vector<int> diff(hold.size());
	std::adjacent_difference(hold.begin(), hold.end(), diff.begin());
	return(*std::min_element(diff.begin(), diff.end()));
}

int Span::longestSpan()
{
	if (hold.size() < 2)
		throw std::runtime_error("you should have at least 2 number.");
	return (*--hold.end() - *hold.begin());
}

void Span::addSequence(int *tab, unsigned int size)
{
	//TODO ; check and protect this function from invalid inputes overflow ...
	// if (size <= 0)
	// 	throw std::runtime_error("zab");
	if (!tab || !*tab || !size)
		throw std::runtime_error("Error, bad input");
	if (static_cast<unsigned int>(hold.size()) + size >= N)
		throw std::runtime_error("You can't add this sequence, you attained the maximum capacity.");
	std::vector<int> sequence(tab, tab + size);
	hold.insert(hold.end(), sequence.begin(), sequence.end());    
	std::sort(hold.begin(), hold.end()); 
	// for(int i = 0; i <10;i++)
	// 	std::cout << hold[i] <<'\n';
}