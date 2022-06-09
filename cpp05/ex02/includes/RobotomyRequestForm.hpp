/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:21:38 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/09 14:02:37 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &f);
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm();

		void	operator=(const RobotomyRequestForm &f);

		virtual void	execute(Bureaucrat const &executor);

	private:
		std::string	_target;
};

#endif