/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:55 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/24 16:20:16 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal	*animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	animals[2]->getBrain()->ideas[0] = "Thought1";
	animals[9]->getBrain()->ideas[0] = "Thought2";
	std::cout << "Animal 9's idea 0 is "
		<< animals[9]->getBrain()->ideas[0] << std::endl;
	std::cout << "Animal 2's brain address is " << animals[2]->getBrain() << std::endl;
	std::cout << "Animal 9's brain address is " << animals[9]->getBrain() << std::endl;
	*(animals[9]) = *(animals[2]);
	std::cout << "Animal 2's brain address is " << animals[2]->getBrain() << std::endl;
	std::cout << "Animal 9's brain address is " << animals[9]->getBrain() << std::endl;
	std::cout << "Animal 9's idea 0 is "
		<< animals[9]->getBrain()->ideas[0] << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];
	return 0;
}
