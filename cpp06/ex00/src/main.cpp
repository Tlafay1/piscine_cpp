/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:11:23 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/14 10:32:25 by tlafay           ###   ########.fr       */
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
	c.print();
	return (0);
}