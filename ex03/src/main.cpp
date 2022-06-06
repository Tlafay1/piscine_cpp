/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:15:21 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/17 11:10:05 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
	Point b(1, 1);
	Point c(2, 0);
	Point point(1, 2);
	bool z = bsp(a, b, c, point);
	std::cout << "This is " << z << std::endl;

	return 0;
}