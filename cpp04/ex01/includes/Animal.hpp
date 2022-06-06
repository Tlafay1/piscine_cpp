/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:56 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/25 08:03:20 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(const Animal &f);
		virtual ~Animal();

		virtual void	operator=(const Animal &f);

		virtual void	makeSound() const;
		std::string		getType() const;
		virtual Brain	*getBrain() const = 0;

	protected:
		std::string	type;	
};

#endif