/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:53 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/24 13:52:41 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &f)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = f;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::operator=(const WrongCat &f)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	type = f.type;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}