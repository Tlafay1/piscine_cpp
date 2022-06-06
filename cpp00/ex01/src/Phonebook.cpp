/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:19:53 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/11 12:19:17 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{

}

Phonebook::~Phonebook(void)
{
	
}

int	my_stoi(std::string str)
{
	int	i;

	std::istringstream(str) >> i;
	return (i);
}

void	Phonebook::Add(int i)
{
	contacts[i].addContact();
}

void	Phonebook::Search(int i)
{
	std::string	index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	do
	{
		for (int j = 0; j < i; j++)
		{
			if (j > 7)
				break ;
			std::cout << "First name" + contacts[j].getFirstName() << std::endl;
			first_name = contacts[j].getFirstName();
			last_name = contacts[j].getLastName();
			nickname = contacts[j].getNickName();
			if (first_name.length() > 10)
				first_name = first_name.substr(0, 9) + '.';
			if (last_name.length() > 10)
				last_name = last_name.substr(0, 9) + '.';
			if (nickname.length() > 10)
				nickname = nickname.substr(0, 9) + '.';
			std::cout << '|' << std::setw(10) << j
				<< '|' << std::setw(10) << first_name
				<< '|' << std::setw(10) << last_name
				<< '|' << std::setw(10) << nickname << '|' << '\n';
		}
		if (contacts[0].getFirstName().empty())
			std::cout << "No item found" << std::endl;
			return;
		std::cout << "Enter index : ";
	}
	while (!getline(std::cin, index) || !is_nbr(index) || index.empty()
		|| my_stoi(index) < 0 || my_stoi(index) > 7 || my_stoi(index) >= i);
	contacts[stoi(index)].printContact();
}