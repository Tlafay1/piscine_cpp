/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:04:00 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/24 15:38:21 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	//std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &f)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = f;
}

Brain::~Brain()
{
	//std::cout << "Brain destructor called" << std::endl;
}

void	Brain::operator=(const Brain &f)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = f.ideas[i];
	}
}
