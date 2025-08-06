/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:50:40 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/06 14:51:52 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << zombie_name << " died.\n";
}

void	Zombie::announce(void)
{
	std::cout << zombie_name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name(std::string name)
{
	static int			n;
	std::stringstream	ss;

	ss << n++;
	zombie_name = name + ss.str();
}
