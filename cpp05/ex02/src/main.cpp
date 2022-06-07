/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:32:57 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/07 16:46:24 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	ShrubberyCreationForm abc("Salut");
	Bureaucrat Bob("Bob", 12);
	try
	{
		abc.beSigned(Bob);
		abc.execute(Bob);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}	
	return 0;
}