/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:59:58 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/19 16:15:45 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_name = "";
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}


FragTrap::FragTrap(const FragTrap &f)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = f;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::operator=(const FragTrap &f)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	_name = f._name;
	_HitPoints = f._HitPoints;
	_EnergyPoints = f._EnergyPoints;
	_AttackDamage = f._AttackDamage;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Hey guys, how about doing a FragTrap high five ?" << std::endl;
}
