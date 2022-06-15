/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:04:25 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/19 16:14:12 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("James");
	a.attack("Bob");
	a.takeDamage(20);
	a.takeDamage(2000);
	a.beRepaired(5);
	a.highFivesGuys();
	return 0;
}