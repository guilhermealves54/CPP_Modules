/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:25:55 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/08 12:23:35 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/harl.hpp"

int main(void)
{
	Harl    harl;

	std::cout << "Printing DEBUG level: " << std::endl;
	harl.complain("DEBUG");
	std::cout << "\nPrinting INFO level: " << std::endl;
	harl.complain("INFO");
	std::cout << "\nPrinting WARNING level: " << std::endl;
	harl.complain("WARNING");
	std::cout << "\nPrinting ERROR level: " << std::endl;
	harl.complain("ERROR");
	std::cout << "\nPrinting non-existant level:" << std::endl;
	harl.complain("");
	return (0);
}