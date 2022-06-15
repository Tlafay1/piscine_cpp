/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:03:41 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/24 10:53:31 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): _name("")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_name = "_clap_name";
}

DiamondTrap::DiamondTrap(const std::string name): _name(name)
{
	ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &f)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = f;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::operator=(const DiamondTrap &f)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	_name = f._name;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " + _name +
		" and my father's name is " + ClapTrap::_name << std::endl;
}
