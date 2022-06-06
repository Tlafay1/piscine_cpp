/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:43:28 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/11 11:20:58 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void	filter(char *level);
	private:
		void	complain(std::string level);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif