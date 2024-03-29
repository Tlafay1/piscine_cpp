/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:23:08 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/31 16:41:21 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat &f);
		~Bureaucrat();

		void	operator=(const Bureaucrat &f);

		void	signForm(Form &f);

		std::string	getName() const;
		int			getGrade() const;
		void		upGrade();
		void		downGrade();

	private:		
		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();
		};

		const std::string	_name;
		int					_grade;
};

std::ostream& operator<< (std::ostream& os, const Bureaucrat& rhs);

#endif
