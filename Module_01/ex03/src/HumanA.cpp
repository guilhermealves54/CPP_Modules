/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:11:25 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/04 18:44:25 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanA.hpp"

HumanA::HumanA(std::string H_name, Weapon club)
{
    name = H_name;

    weapon.setType(w);
}

HumanA::~HumanA() {}

void    HumanA::attack(void)
{
     std::cout << name << " attacks with their " << Weapon.getType() << std::endl;
}
