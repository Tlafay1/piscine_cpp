/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:20:35 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/11 11:03:09 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char const *argv[])
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "usage : ./HarlFilter <complaint>" << std::endl;
		return (1);
	}
	harl.filter((char *)argv[1]);
	return (0);
}