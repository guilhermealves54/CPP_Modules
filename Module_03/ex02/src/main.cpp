/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:22:50 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/19 18:41:23 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/FragTrap.hpp"

int	main(void)
{
    std::cout << "\n---- Parameterized constructor ----" << std::endl;
    FragTrap a("A");  // Calls ScavTrap(string) constructor

    std::cout << "\n---- Testing class methods ----" << std::endl;
	a.attack("Darth Vader");
    a.highFivesGuys();

    std::cout << "\n---- Calling destructors ----" << std::endl;
    return (0);
}
