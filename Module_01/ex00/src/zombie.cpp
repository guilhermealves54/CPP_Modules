/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:50:40 by gribeiro          #+#    #+#             */
/*   Updated: 2025/10/21 14:55:24 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/zombie.hpp"

Zombie::Zombie(std::string name)
{
	_zombie_name = name;
}

Zombie::~Zombie()
{
	std::cout << _zombie_name << " died.\n";
}

void    Zombie::announce(void)
{
	std::cout << _zombie_name << ": BraiiiiiiinnnzzzZ...\n";
}
