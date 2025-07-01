/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:50:40 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/01 16:26:23 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/zombie.hpp"

Zombie::Zombie(std::string name)
{
	zombie_name = name;
}

Zombie::~Zombie()
{
	std::cout << zombie_name << " died.\n";
}

void    Zombie::announce(void)
{
	std::cout << zombie_name << ": BraiiiiiiinnnzzzZ...\n";
}
