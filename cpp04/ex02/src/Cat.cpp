/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:53 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/25 08:23:10 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	// std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &f)
{
	// std::cout << "Cat copy constructor called" << std::endl;
	*this = f;
}

Cat::~Cat()
{
	// std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void	Cat::operator=(const Cat &f)
{
	Brain *tmp = new Brain();
	// std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = f.getType();
	*tmp = *(f.getBrain());
	(this->brain) = (tmp);
}

void	Cat::operator=(const AAnimal &f)
{
	// std::cout << "Cat Animal copy assignment operator called" << std::endl;
	this->type = f.getType();
	*(this->brain) = *(f.getBrain());
}

void	Cat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (brain);
}
