/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:17:05 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/24 13:25:04 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &f)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = f;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::operator=(const WrongAnimal &f)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	type = f.type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Moewark" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}
