/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:24:43 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/11 10:41:04 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string str;
	Phonebook	phonebook;
	int			i;
	
	std::cout << "Enter a command : ";
	i = 0;
	while (getline(std::cin, str))
	{
		if (!str.compare("ADD"))
		{
			phonebook.Add(i % 8);
			i++;
		}
		else if (!str.compare("SEARCH"))
		{
			phonebook.Search(i);
		}
		else if (!str.compare("EXIT"))
		{
			std::cout << "Goodbye !"<< std::endl;
			return (0);
		}
		std::cout << "Enter a command : ";
	}
	std::cout << "\nGoodbye !"<< std::endl;
}