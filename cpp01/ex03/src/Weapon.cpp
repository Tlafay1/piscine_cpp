/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:28:28 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/28 09:40:22 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "A weapon has been created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "A weapon has been destroyed" << std::endl;
}

const std::string&  Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string str)
{
	type = str;
}