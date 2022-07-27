/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:00:15 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/23 15:46:00 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void)
{
	srand(time(0));
	Span s(10);
	std::vector<int> v;

	for (int i = 0; i < 10; ++i)
	{
		s.addNumber(rand());
	}
	s.print();
	// std::cout << s.longestSpan() << std::endl;
	// std::cout << s.shortestSpan() << std::endl;
	// try
	// {
	// 	s.addNumber(15);
	// 	s.addFromIts(v.begin(), v.end());
	// 	s.addFromIts(v.begin(), v.end());
	// 	s.addNumber(5);
	// 	s.addFromIts(v.begin(), v.end());
	// 	// s.print();
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	return 0;
}