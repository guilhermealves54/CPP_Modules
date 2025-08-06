/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:08:31 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/06 13:50:39 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static int			read(char **argv);
static std::string	modify(std::string buff, std::string s1, std::string s2);

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "ERROR: Invalid parameters" << std::endl, 1);
	if (read(argv) == -1)
		return (1);
	return (0);
}

static int	read(char **argv)
{
	std::string 	buff;
	std::string		newline;
	std::string		outfile_name = std::string(argv[1]) + ".replace";
	std::ifstream	infile(argv[1]);
	std::ofstream	outfile(outfile_name.c_str());

	if (!infile)
		return (std::cerr << "ERROR: Invalid input file" << std::endl, -1);
	if (!outfile)
		return (std::cerr << "ERROR: Could not create outfile" 
			<< std::endl, -1);
	while (std::getline(infile, buff))
	{
		newline = modify(buff, std::string(argv[2]), std::string(argv[3]));
		outfile << newline << std::endl;
	}
	return (0);
}

static std::string	modify(std::string buff, std::string s1, std::string s2)
{
	std::string	newline;
	size_t		i = 0;
	size_t		n = 0;

	if (s1.empty())
		return (buff);
	while ((n = buff.find(s1, i)) != std::string::npos)
	{
		newline.append(buff.substr(i, n - i));
		newline.append(s2);
		i = n + s1.length();
	}
	newline.append(buff.substr(i));
	return (newline);
}
