/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:49:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/27 12:58:53 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	Bob("Bob");
	Bob.announce();
	Zombie	*Steve = newZombie("Steve");
	Steve->announce();
	randomChump("Pablo");	
	delete Steve;
	return 0;
}