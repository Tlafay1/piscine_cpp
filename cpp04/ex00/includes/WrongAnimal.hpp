/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:56 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/27 10:07:53 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &f);
		virtual ~WrongAnimal();

		void	operator=(const WrongAnimal &f);

		void		makeSound() const;
		std::string	getType() const;

	protected:
		std::string	type;	
};

#endif