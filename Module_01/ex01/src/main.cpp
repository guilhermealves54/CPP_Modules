/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:50:43 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/04 16:06:09 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/zombie.hpp"

static Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*horde;
	int		zombies;

	zombies = 10;
	std::cout << "Creating horde with 10 zombies...\n";
	horde = zombieHorde(zombies, "z");
	std::cout << "Destroing horde...\n";
	delete[] horde;
	return (0);
}

static Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *horde;

	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name);
		horde[i].announce();
	}
	return (horde);
}
