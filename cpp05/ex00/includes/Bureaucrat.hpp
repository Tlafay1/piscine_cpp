/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:23:08 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/27 17:13:23 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat &f);
		~Bureaucrat();

		void	operator=(const Bureaucrat &f);

		std::string	getName() const;
		int			getGrade() const;
		void		upGrade();
		void		downGrade();

	private:
		class GradeTooHighException: public std::exception
		{
			public:
				const char *what () const throw ();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char *what () const throw ();
		};

		const std::string	_name;
		int					_grade;
};

std::ostream& operator<< (std::ostream& stream, const Bureaucrat& rhs);
