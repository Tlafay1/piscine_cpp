/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:22:53 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/28 12:38:20 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	weapon;
	HumanA	Bob("Bob", weapon);
	HumanB	Jim("Jim");

	weapon.setType("bazooka");
	Jim.setWeapon(weapon);
	Bob.attack();
	Jim.attack();
	weapon.setType("something else");
	Bob.attack();
	Jim.attack();
}