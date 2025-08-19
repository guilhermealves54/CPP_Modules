/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:22:43 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/19 12:52:59 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string c_name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	if (c_name.empty())
		_name = "UnnamedClapTrap";
	else
		_name = c_name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout 
			<< "Claptrap "	<< _name
			<< " attacks "	<< target
			<< ", causing "	<< _attackDamage
			<< " points of damage!"	<< std::endl;
		_energyPoints--;
	}
	else if (_hitPoints <= 0)
		std::cout
			<< "Claptrap "	<< _name
			<< " has no more hit points."	<< std::endl;
	else if (_energyPoints <= 0)
		std::cout
			<< "Claptrap "	<< _name
			<< " has no more energy points."	<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout 
			<< "Claptrap "	<< _name
			<< " took "	<< amount
			<< " points of damage!"	<< std::endl;
	}
	else
		std::cout
			<< "Claptrap "	<< _name
			<< " has no more hit points."	<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		if (_hitPoints < 0)
			_hitPoints = 0;
		_hitPoints += amount;
				std::cout 
				<< "Claptrap "	<< _name
				<< " repaired, gaining "	<< amount
				<< " hit points."	<< std::endl;
	}
	else
		std::cout 
			<< "Claptrap "	<< _name
			<< " has no energy points."	<< std::endl;
}
