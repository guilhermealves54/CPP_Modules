/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:27:11 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/04 19:24:13 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	filled_contacts = 0;
	for (int i = 0; i < 8; i++)
		Contact[i].id = i;
}
PhoneBook::~PhoneBook(void)
{}

void	PhoneBook::add_contact(void)
{
	if (filled_contacts < 8)
		Contact[filled_contacts].fill_contact();
	else
		Contact[filled_contacts % 8].fill_contact();
	filled_contacts++;
}

void	PhoneBook::srch_contact(void)
{
	int			index;
	std::string	cmmd;

	if (filled_contacts == 0)
	{
		std::cout << "No contacts registered. Please ADD a contact first.\n";
		return ;
	}
	std::cout
		<< " | " << std::setw(10) << std::right << "Index"
		<< " | " << std::setw(10) << "First name"
		<< " | " << std::setw(10) << "Last name"
		<< " | " << std::setw(10) << "Nickname" << " | \n";
	for (int i = 0; i < 8; i++)
		if (Contact[i].check_filled() == 1)
			Contact[i].print_search();
	while (1)
	{
		std::cout << "Select an index > ";
		std::getline(std::cin, cmmd);
		std::stringstream	stream(cmmd);
		if ((stream >> index) && stream.eof())
		{
			if (index >= 0 && index < 8 && Contact[index].check_filled() == 1)
			{
				Contact[index].print_full_data();
				break;
			}
			else
				std::cout << "Index: " << index << " is not valid.\n";
		}
		else
			std::cout << cmmd << ": is not a valid index.\n";
	}
}
