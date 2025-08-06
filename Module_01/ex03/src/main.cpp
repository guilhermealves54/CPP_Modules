/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:09:20 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/06 12:09:21 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/weapon.hpp"
#include "../header/HumanA.hpp"
#include "../header/HumanB.hpp"

int	main(void)
{
	{
		Weapon  club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack(); 
	}
	{
		Weapon  club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
