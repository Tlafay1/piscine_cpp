/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 08:44:50 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/15 08:50:55 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(""), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &f)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = f;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::operator=(const ClapTrap &f)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	_name = f._name;
	_HitPoints = f._HitPoints;
	_EnergyPoints = f._EnergyPoints;
	_AttackDamage = f._AttackDamage;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_HitPoints <= 0)
	{
		std::cout << _name + " has no hitpoints left !" << std::endl;
		return ;
	}
	if (_EnergyPoints <= 0)
	{
		std::cout << _name + " has no energy points left !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " + _name + " attacks " + target +  ", causing "
	<< _AttackDamage << " points of damage!" << std::endl;
	_EnergyPoints--;
	std::cout << _name + " now has " << _HitPoints << " hitpoints and "
		<< _EnergyPoints << " energy points" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints <= 0)
	{
		std::cout << _name + " has no hitpoints left !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " + _name + " takes "
		<< amount << " damage !" << std::endl;
	if ((int)(_HitPoints - amount) < 0)
		_HitPoints = 0;
	else
		_HitPoints -= amount;
	std::cout << _name + " now has " << _HitPoints << " hitpoints and "
		<< _EnergyPoints << " energy points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints <= 0)
	{
		std::cout << _name + " has no hitpoints left !" << std::endl;
		return ;
	}
	if (_EnergyPoints <= 0)
	{
		std::cout << _name + " has no energy points left !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " + _name + " repairs "
		<< amount << " damage !" << std::endl;
	_HitPoints += amount;
	_EnergyPoints--;
	std::cout << _name + " now has " << _HitPoints << " hitpoints and "
		<< _EnergyPoints << " energy points" << std::endl;
}