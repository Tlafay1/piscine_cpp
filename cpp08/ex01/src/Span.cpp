/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:00:12 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/23 12:59:24 by tlafay           ###   ########.fr       */
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
	_v[_index++] = N;
}

int		Span::shortestSpan()
{
	int	min = INT_MAX;
	for (size_t i = 0; i < _index; i++)
	{
		for (size_t j = i + 1; j < _index; j++)
		{
			if (abs(_v[j] - _v[i]) < min)
				min = abs(_v[j] - _v[i]);
		}
	}
	return min;
}

int		Span::longestSpan()
{
	int	max = INT_MIN;
	for (size_t i = 0; i < _index; i++)
	{
		for (size_t j = i + 1; j < _index; j++)
		{
			if (abs(_v[j] - _v[i]) > max)
				max = abs(_v[j] - _v[i]);
		}
	}
	return max;
}

void	Span::addFromIts(std::vector<int>::iterator it1,
			std::vector<int>::iterator it2)
{
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
