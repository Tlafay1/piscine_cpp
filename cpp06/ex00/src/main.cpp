/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:11:23 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/13 14:59:30 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "usage: ./ScalarConversion <string>" << std::endl;
		return (1);
	}
	Convert c(argv[1]);
	// char	*num;
	// num = (char *)argv[1];
	// double d = std::strtod(num, NULL);
	// if (errno == ERANGE)
	// 	std::cout << "Impossible" << std::endl;
	// std::cout << std::isinf(d) << std::endl;
	// int i = static_cast<int>(d);
	// float	f = static_cast<float>(d);
	// char	c = static_cast<char>(d);
	// std::cout << "char: " << c << std::endl;
	// std::cout << "int: " << i << std::endl;
	// std::cout << std::fixed << std::setprecision(1) << "float: " << f << 'f' <<std::endl;
	// std::cout << "double: " << d << std::endl;
}