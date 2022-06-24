/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:00:12 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/23 15:18:39 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _v(std::vector<int>(0)), _N(0), _index(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int N): _v(std::vector<int>(N)), _N(N), _index(0)
{
	std::cout << "Int constructor called" << std::endl;
}

void	Span::addNumber(unsigned int N)
{
	if (_index >= _N)
		throw std::out_of_range ("Index out of range");
	_v[_index++] = N;
}

unsigned int		Span::shortestSpan()
{
	if (_index < 2)
		throw std::length_error("Span must have at least 2 elements");
	unsigned int	min = UINT_MAX;
	for (size_t i = 0; i < _index; i++)
	{
		for (size_t j = i + 1; j < _index; j++)
		{
			if (abs((long)_v[j] - (long)_v[i]) < min)
				min = abs(_v[j] - _v[i]);
			if (!min)
				return (0);
		}
	}
	return min;
}

unsigned int		Span::longestSpan()
{
	if (_index < 2)
		throw std::length_error("Span must have at least 2 elements");
	return (*std::max_element(_v.begin(), _v.end())
		- *std::min_element(_v.begin(), _v.end()));
}

void	Span::addFromIts(std::vector<int>::iterator it1,
			std::vector<int>::iterator it2)
{
	if (_index + std::distance(it1, it2) >= _N)
		throw std::out_of_range ("Index out of range");
	_v.insert(_v.begin() + _index, it1, it2);
	_index += std::distance(it1, it2);
}

void	Span::print()
{
	for (size_t i = 0; i < _index; ++i)
	{
		std::cout << _v[i] << std::endl;
	}
}

size_t	Span::length()
{
	return _index;
}

Span::Span(const Span &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

void	Span::operator=(const Span &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_v = f._v;
	_N = f._N;
}
