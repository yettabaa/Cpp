/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:40:31 by yettabaa          #+#    #+#             */
/*   Updated: 2023/09/28 23:32:11 by yettabaa         ###   ########.fr       */
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

Span::Span(const Span& copy) { *this = copy; }

Span::~Span() {}

void Span::addNumber(int span)
{
	if (static_cast<unsigned int>(hold.size()) == N)
		throw std::runtime_error("You can't add this number, you attained the maximum capacity.");
	hold.insert(hold.end(), span);
}

int Span::shortestSpan()
{
	if (hold.size() < 2)
		throw std::runtime_error("you should have at least 2 number.");
	std::vector<int> tmp = hold;
	std::sort(tmp.begin(), tmp.end()); 	
	std::vector<int> diff(tmp.size());
	std::adjacent_difference(tmp.begin(), tmp.end(), diff.begin());
	return(*std::min_element(diff.begin(), diff.end()));
}

int Span::longestSpan()
{
	if (hold.size() < 2)
		throw std::runtime_error("you should have at least 2 number.");
	std::vector<int> tmp = hold;
	std::sort(tmp.begin(), tmp.end()); 
	return (*--tmp.end() - *tmp.begin());
}

void Span::addSequence(int *tab, unsigned int size)
{
	if (!tab || !*tab || !size)
		throw std::runtime_error("Error, bad input");
	// printf("size = %d size  = %d N = %d\n", static_cast<unsigned int>(hold.size()), size, N);
	if (static_cast<unsigned int>(hold.size()) + size > N)
		throw std::runtime_error("You can't add this sequence, you attained the maximum capacity.");
	std::vector<int> sequence(tab, tab + size);
	hold.insert(hold.end(), sequence.begin(), sequence.end());    
}

void Span::printS()
{
	std::vector<int>::iterator it;
	for(it = hold.begin(); it != hold.end(); it++)
		std::cout << *it << ' ' ;
	std::cout << std::endl;	
}