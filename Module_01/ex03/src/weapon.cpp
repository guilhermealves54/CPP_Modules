/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:25:30 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/04 17:42:50 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/weapon.hpp"

Weapon::Weapon() 
{
	type = "";
}

Weapon::~Weapon() {}

void	Weapon::setType(std::string wtype)
{
	type = wtype;
}

const std::string&	Weapon::getType()
{
	const std::string &wtype = type;
	return (wtype);
}
