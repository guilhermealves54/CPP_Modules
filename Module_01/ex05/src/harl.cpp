/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:25:50 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/08 12:21:18 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/harl.hpp"

Harl::Harl() {}

Harl::~Harl () {}

void Harl::complain (std::string level)
{
	std::map <std::string, void (Harl::*)()> comments;
	comments["DEBUG"] = &Harl::debug;
	comments["INFO"] = &Harl::info;
	comments["WARNING"] = &Harl::warning;
	comments["ERROR"] = &Harl::error;
	std::map<std::string, void (Harl::*)()>::iterator entry = comments.find(level);
	if (entry != comments.end())
		(this->*(entry->second))();
	else
		std::cout << "Harl has no complains about that..." << std::endl;
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		<< "You didn't put enough bacon in my burger! If you did, "
		<< "I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I've been coming for years, whereas you started working here "
		<< "just last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." 
		<< std::endl;
}
