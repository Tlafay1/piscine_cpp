/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:00:15 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/23 12:50:07 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void)
{
	Span s(10);
	std::vector<int> v;

	v.push_back(3);
	v.push_back(4);
	v.push_back(6);
	s.addNumber(5);
	s.addNumber(10);
	s.addNumber(15);
	s.addFromIts(v.begin(), v.end());
	s.print();
	return 0;
}