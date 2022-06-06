/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:59:58 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/19 15:48:32 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_name = "";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}


ScavTrap::ScavTrap(const ScavTrap &f)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = f;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::operator=(const ScavTrap &f)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	_name = f._name;
	_HitPoints = f._HitPoints;
	_EnergyPoints = f._EnergyPoints;
	_AttackDamage = f._AttackDamage;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " + _name + " is now in Gate keeper mode" << std::endl;
}
