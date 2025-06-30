/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:27:11 by gribeiro          #+#    #+#             */
/*   Updated: 2025/06/30 01:32:46 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../header/phonebook.hpp>

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
	//	This function will disp all contacts.
	//	Index, first name, last name, nickname
	//	10 Chars MAX (last char '.')!! Pipe dividing columns
	//	RIGHT ALIGNED
	//	User will select the index to print. display one field p line.
	//	If (Contact.check ==  1)
}
