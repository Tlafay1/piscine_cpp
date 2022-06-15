/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:04:25 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/15 08:39:38 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("James");
	a.attack("Bob");
	a.takeDamage(2);
	// a.takeDamage(20);
	a.attack("Bob");
	for (int i = 0; i < 8; i++)
		a.beRepaired(1);
	a.beRepaired(1);
	a.attack("Bob");
	a.takeDamage(100);
	a.attack("Bob");
	a.takeDamage(10);
	return 0;
}