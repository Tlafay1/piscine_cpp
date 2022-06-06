/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:51 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/25 09:15:46 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
	public:
		Dog();
		Dog(const Dog &f);
		~Dog();

		void	operator=(const Dog &f);
		void	operator=(const AAnimal &f);
		
		void			makeSound() const;
		virtual Brain	*getBrain() const;
	
	private:
		Brain	*brain;
};

#endif