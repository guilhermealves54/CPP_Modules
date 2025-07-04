/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:25:30 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/04 18:31:30 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/weapon.hpp"

Weapon::Weapon() 
{
	type = "";
}

Weapon::~Weapon() {}

void	Weapon::setType(Weapon wtype)
{
	type = wtype.getType();
}

const std::string&	Weapon::getType()
{
	const std::string &wtype = type;
	return (wtype);
}
