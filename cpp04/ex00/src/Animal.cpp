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

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &f)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = f;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::operator=(const Animal &f)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	type = f.type;
}

void	Animal::makeSound() const
{
	std::cout << "Moewark" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}
