/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:21:14 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/08 11:19:39 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &f);
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm();

		void	operator=(const PresidentialPardonForm &f);

		virtual void	execute(Bureaucrat const &executor);

	private:
		std::string	_target;
};

#endif