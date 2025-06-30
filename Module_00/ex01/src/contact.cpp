/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:38:16 by gribeiro          #+#    #+#             */
/*   Updated: 2025/06/30 01:37:43 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../header/phonebook.hpp>

void	Contact::fill_contact(void)
{
	clear_contact();
	while (first_name == "")
		fill_first_name();
	while (last_name == "")
		fill_last_name();
	while (nickname == "")
		fill_nickname();
	while (phone_nbr == "")
		fill_phone_nbr();
	while (dark_secrt == "")
		fill_dark_secrt();
	filled = 1;
}

void	Contact::fill_first_name()
{
	std::cout << "First name > ";
	std::getline(std:: cin, first_name);
	//	Parse input
}

void	Contact::fill_last_name()
{
	std::cout << "Last name > ";
	std::getline(std:: cin, last_name);
	//	Parse input
}

void	Contact::fill_nickname()
{
	std::cout << "Nickname > ";
	std::getline(std:: cin, nickname);
	//	Parse input
}

void	Contact::fill_phone_nbr()
{
	std::cout << "Phone number > ";
	std::getline(std:: cin, phone_nbr);
	//	Parse input
}

void	Contact::fill_dark_secrt()
{
	std::cout << "Darkest secret > ";
	std::getline(std:: cin, dark_secrt);
	//	Parse input
}

void	Contact::print_full_data(void)
{
	if (filled == 1)
	{
		std::cout 	<< "\n"
					<< "First name:     " << first_name << "\n"
					<< "Last name:      " << last_name << "\n"
					<< "Nickname:       " << nickname << "\n"
					<< "Phone number:   " << phone_nbr << "\n"
					<< "Darkest secret: " << dark_secrt << "\n";
	}
}

void	Contact::print_search(void)
{
	//	Index, first name, last name, nickname
	//	10 Chars MAX (last char '.')!! Pipe dividing columns
	//	RIGHT ALIGNED
}

void	Contact::clear_contact(void)
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_nbr = "";
	dark_secrt = "";
	filled = 0;
}

int	Contact::check_filled(void)
{
	if (filled == 1)
		return (1);
	return (0);
}
