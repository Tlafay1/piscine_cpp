/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:53 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/24 12:21:10 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &f)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = f;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::operator=(const Cat &f)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	type = f.type;
}

void	Cat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}