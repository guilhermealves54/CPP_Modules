/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 11:22:48 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/19 13:30:47 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout 
			<< "ScavTrap "	<< _name
			<< " attacks "	<< target
			<< ", causing "	<< _attackDamage
			<< " points of damage!"	<< std::endl;
		_energyPoints--;
	}
	else if (_hitPoints <= 0)
		std::cout
			<< "ScavTrap "	<< _name
			<< " has no more hit points."	<< std::endl;
	else if (_energyPoints <= 0)
		std::cout
			<< "ScavTrap "	<< _name
			<< " has no more energy points."	<< std::endl;
}

void    ScavTrap::guardGate()
{
	std::cout 
		<< "ScavTrap "	<< _name
		<< " is now in Gate Keeper mode." << std::endl;
}
