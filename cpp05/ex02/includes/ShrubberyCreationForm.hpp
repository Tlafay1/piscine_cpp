/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:21:39 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/07 17:25:29 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &f);
		ShrubberyCreationForm(std::string const &target);
		~ShrubberyCreationForm();

		void	operator=(const ShrubberyCreationForm &f);

		virtual void	execute(Bureaucrat const &executor);

	private:
		std::string	_target;
};

#endif