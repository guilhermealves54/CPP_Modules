/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:11:22 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/04 18:27:50 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanB.hpp"

HumanB::HumanB(std::string H_name)
{
    name = H_name;
}

HumanB::~HumanB() {}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with their " << Weapon.getType() << std::endl;
}
