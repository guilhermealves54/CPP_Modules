/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:25:30 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/05 18:32:46 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/weapon.hpp"

Weapon::Weapon(const std::string &wtype) : type(wtype) {}

Weapon::~Weapon() {}

void	Weapon::setType(const std::string &wtype)
{
	type = wtype;
}

const std::string	&Weapon::getType() const
{
	return (type);
}
