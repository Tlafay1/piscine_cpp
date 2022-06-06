/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:32:57 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/06 14:50:07 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	ShrubberyCreationForm abc("Salut");
	Bureaucrat Bob("Bob", 150);
	abc.execute(Bob);
	std::cout << abc.getSigned() << std::endl;
	// std::cout << abc.execute(Bob) << std::endl;
// 	std::string tree;
// 	tree = "                      ___\n"
// "                _,-'\"\"   \"\"\"\"`--.\n"
// "             ,-'          __,,-- \\\n"
// "           ,'    __,--\"\"\"\"dF      )\n"
// "          /   .-\"Hb_,--\"\"dF      /\n"
// "        ,'       _Hb ___dF\"-._,-'\n"
// "      ,'      _,-\"\"\"\"   \"\"--..__\n"
// "     (     ,-'                  `.\n"
// "      `._,'     _   _             ;\n"
// "       ,'     ,' `-'Hb-.___..._,-'\n"
// "       \\    ,'\"Hb.-'HH`-.dHF\"\n"
// "        `--'   \"Hb  HH  dF\"\n"
// "                \"Hb HH dF\n"
// "                 \"HbHHdF\n"
// "                  |HHHF\n"
// "                  |HHH|\n"
// "                  |HHH|\n"
// "                  |HHH|\n"
// "                  |HHH|\n"
// "                  dHHHb\n"
// "                .dFd|bHb.               o\n"
// "      o       .dHFdH|HbTHb.          o /\n"
// "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y\n"
// "##########################################\n";
//    std::cout << tree << std::endl;
	return 0;
}