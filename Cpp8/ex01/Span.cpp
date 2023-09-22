/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:40:31 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/22 02:57:38 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <numeric>

Span::Span() : N(0) {}

Span& Span::operator=(const Span& overl)
{
	(void)overl;
	return(*this);
}

Span::Span(unsigned int N) : N(N) {}

Span::Span(const Span& copy)
{
	(void)copy;
}

Span::~Span() {}

void Span::addNumber(int span)
{
	// std::cout << static_cast<unsigned int>(hold.size()) <<'\n';
	if (static_cast<unsigned int>(hold.size()) == N)
		throw std::runtime_error("zab");
	hold.insert(hold.end(), span);
	std::sort(hold.begin(), hold.end()); 
}

 int Span::shortestSpan()
{
	if (hold.size() < 2)
		throw std::runtime_error("zab");
	std::vector<int> diff(hold.size());
	std::adjacent_difference(hold.begin(), hold.end(), diff.begin());
	return(*std::min_element(diff.begin(), diff.end()));
}

int Span::longestSpan()
{
	if (hold.size() < 2)
		throw std::runtime_error("zab");
	return (*--hold.end() - *hold.begin());
}

void Span::addSequence(int *tab, unsigned int size)
{
	//TODO ; check and protect this function from invalid inputes overflow ...
	// if (size <= 0)
	// 	throw std::runtime_error("zab");
	if (static_cast<unsigned int>(hold.size()) + size >= N)
		throw std::runtime_error("zab");
	std::vector<int> sequence(tab, tab + size);
	hold.insert(hold.end(), sequence.begin(), sequence.end());    
	std::sort(hold.begin(), hold.end()); 
}