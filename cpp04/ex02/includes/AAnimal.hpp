/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:56 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/25 09:44:47 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &f);
		virtual ~AAnimal();

		virtual void	operator=(const AAnimal &f);

		virtual void	makeSound() const = 0;
		std::string		getType() const;
		virtual Brain	*getBrain() const = 0;

	protected:
		std::string	type;	
};

#endif