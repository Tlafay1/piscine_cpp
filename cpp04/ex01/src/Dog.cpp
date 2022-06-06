/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:54 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/24 13:25:43 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	//std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &f)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = f;
}

Dog::~Dog()
{
	//std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void	Dog::operator=(const Dog &f)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	type = f.type;
	brain = f.brain;
}

void	Dog::operator=(const Animal &f)
{
	std::cout << "Dog Animal copy assignment operator called" << std::endl;
	this->type = f.getType();
	*(this->brain) = *(f.getBrain());
}

void	Dog::makeSound() const
{
	std::cout << "Bark bark" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return (brain);
}
