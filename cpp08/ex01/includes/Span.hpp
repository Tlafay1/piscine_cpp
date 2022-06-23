/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:00:37 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/23 11:03:25 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cmath>
#include <vector>

class Span
{
	public:
		Span();
		Span(const Span &f);
		Span(unsigned int N);
		~Span();

		void	addNumber(unsigned int N);
		int		shortestSpan();
		int		longestSpan();
		void	addFromIts(std::vector<int>::iterator it1,
			std::vector<int>::iterator it2);
		void	print();
		size_t	length();

		void	operator=(const Span &f);

	private:
		std::vector<int>	_v;
		unsigned int		_N;
		size_t				_index;
};

#endif