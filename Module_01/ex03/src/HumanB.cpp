/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:11:22 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/05 18:54:31 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanB.hpp"

HumanB::HumanB(std::string H_name)
{
    name = H_name;
	weapon = NULL;
}

HumanB::~HumanB() {}

void    HumanB::attack(void)
{
	if (weapon)
    	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon!" << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}
