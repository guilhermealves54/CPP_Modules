/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:22:50 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/19 13:12:13 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTrap.hpp"

int	main(void)
{
    std::cout << "\n---- Parameterized constructor ----" << std::endl;
    ScavTrap a("A");  // Calls ScavTrap(string) constructor

    std::cout << "\n---- Copy constructor ----" << std::endl;
    ScavTrap b(a);  // Calls copy constructor

    std::cout << "\n---- Copy assignment operator ----" << std::endl;
    a = b;  // Calls assignment operator

    std::cout << "\n---- Testing class methods ----" << std::endl;
    b.attack("intruder");
    b.guardGate();

    std::cout << "\n---- Calling destructors ----" << std::endl;
    return (0);
}
