/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:38:16 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/01 00:11:58 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/phonebook.hpp"

Contact::Contact(void)
{
	clear_contact();
}
Contact::~Contact(void)
{}

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
}

void	Contact::print_full_data(void)
{
	if (filled == 1)
	{
		std::cout
			<< "First name:     " << first_name << "\n"
			<< "Last name:      " << last_name << "\n"
			<< "Nickname:       " << nickname << "\n"
			<< "Phone number:   " << phone_nbr << "\n"
			<< "Darkest secret: " << dark_secrt << "\n";
	}
}

std::string	Contact::format_str(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::print_search(void)
{
	std::cout
		<< " | " << std::setw(10) << std::right << id << " | "
		<< std::setw(10) << format_str(first_name) << " | "
		<< std::setw(10) << format_str(last_name) << " | "
		<< std::setw(10) << format_str(nickname) << " | \n";
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
