/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:59:43 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/24 10:56:13 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &f);
		DiamondTrap(const std::string name);
		~DiamondTrap();

		void	operator=(const DiamondTrap &f);

		void	whoAmI();

		using FragTrap::_HitPoints;
		using ScavTrap::_EnergyPoints;
		using FragTrap::_AttackDamage;
		using ScavTrap::attack;

	private:
		std::string	_name;
};

#endif