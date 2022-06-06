/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:18:14 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/11 12:19:40 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{
	
}

bool	is_nbr(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

void	Contact::addContact(void)
{
	do
		std::cout << "Enter your first name : ";
	while (!getline(std::cin, first_name) || first_name.empty());
	do
		std::cout << "Enter your last name : ";
	while (!getline(std::cin, last_name) || last_name.empty());
	do
		std::cout << "Enter your nickname : ";
	while (!getline(std::cin, nickname) || nickname.empty());
	do
		std::cout << "Enter your phone number : ";
	while (!getline(std::cin, phone_number) || !is_nbr(phone_number) || phone_number.empty());
	do
		std::cout << "Enter your darkest secret : ";
	while (!getline(std::cin, darkest_secret) || darkest_secret.empty());
}

void	Contact::printContact(void)
{
	std::cout << "First name : " << first_name << std::endl;
	std::cout << "Last name : " << last_name << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone number : " << phone_number << std::endl;
	std::cout << "Darkest secret : " << darkest_secret << std::endl;
}

std::string	Contact::getFirstName()
{
	return (this->first_name);
}

std::string	Contact::getLastName()
{
	return (this->last_name);
}

std::string	Contact::getNickName()
{
	return (this->nickname);
}
