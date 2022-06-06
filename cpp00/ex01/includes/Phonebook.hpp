/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:36:25 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/11 12:19:27 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# include <iostream>
# include <iomanip>
# include <sstream>

bool	is_nbr(std::string str);

class Phonebook
{
	public:
		Contact	contacts[8];
		Phonebook(void);
		~Phonebook(void);

	void	Add(int i);
	void	Search(int i);
};

#endif