/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:14:51 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/25 08:21:38 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &f);
		~Cat();

		void	operator=(const Cat &f);
		void	operator=(const Animal &f);

		void			makeSound() const;
		virtual Brain	*getBrain() const;

	private:
		Brain	*brain;
};

#endif