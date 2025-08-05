/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:11:25 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/05 18:31:19 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanA.hpp"

HumanA::HumanA(std::string H_name, Weapon &w) : weapon(w), name(H_name) {}

HumanA::~HumanA() {}

void    HumanA::attack(void)
{
     std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
