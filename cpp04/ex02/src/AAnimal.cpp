/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:17:05 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/25 09:45:36 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	//std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &f)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = f;
}

AAnimal::~AAnimal()
{
	//std::cout << "AAnimal destructor called" << std::endl;
}

void	AAnimal::operator=(const AAnimal &f)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	type = f.type;
}

void	AAnimal::makeSound() const
{
	std::cout << "Moewark" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (type);
}
