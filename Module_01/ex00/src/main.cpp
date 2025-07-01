/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:50:43 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/01 16:24:15 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/zombie.hpp"

static Zombie	*newZombie(std::string name);
static void		randomChump(std::string name);

int	main(void)
{
	Zombie	*z1;

	std::cout << "Allocating z1 with newZombie(): \n";
	z1 = newZombie ("Guilherme");
	z1->announce();
	std::cout << "deleting z1 manually: \n";
	delete z1;
	std::cout << "\nCreating zombie with randomChump(): \n";
	randomChump ("Sara");
	return (0);
}

static Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}

static void	randomChump(std::string name)
{
	Zombie	Zombie(name);
	Zombie.announce();
}
