/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:57:44 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/28 16:13:53 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	std::string		str;
	std::string		filename;
	std::string		replace;
	std::string		to_replace;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4)
	{
		std::cout << "Usage: ./SedIsForLosers <filename> <to_replace> <new_chain>"
			<< std::endl;
		return (1);
	}
	filename = argv[1];
	infile.open(filename);
	if (!infile)
	{
		std::cout << "Failed to open " << filename << std::endl;
		return (1);
	}
	outfile.open(filename + ".replace");
	if (!outfile)
	{
		std::cout << "Failed to open " << filename + ".replace" << std::endl;
		return (1);
	}
	to_replace = argv[2];
	replace = argv[3];
	while (getline(infile, str))
	{
		for (int pos = -1; !to_replace.empty();)
		{
			pos = str.find(to_replace, pos + 1);
			if (pos >= str.size() || pos == std::string::npos)
				break ;
			str = str.substr(0, pos) + replace
				+ str.substr(pos + to_replace.length());
		}
		outfile << str << '\n';
	}
	infile.close();
	outfile.close();
	return (0);
}
