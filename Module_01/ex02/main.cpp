/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:13:39 by gribeiro          #+#    #+#             */
/*   Updated: 2025/10/21 16:19:44 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "\n--- Memory addresses ---\n";
	std::cout << "Memory address of brain: " << &brain << std::endl;
	std::cout << "Memory address held by PTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by REF: " << &stringREF << std::endl;

	std::cout << "\n--- Values ---\n";
	std::cout << "Value of brain: " << brain << std::endl;
	std::cout << "Value pointed by PTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by REF: " << stringREF << std::endl;
	std::cout << "\n";
	return (0);
}
