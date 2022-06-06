/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:56 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/24 13:27:48 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &f);
		virtual ~Animal();

		void	operator=(const Animal &f);

		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string	type;	
};

#endif