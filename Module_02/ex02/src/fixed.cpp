/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:15:37 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/13 15:25:39 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	_value = val << _fractionalBits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(val * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat() const
{
	return static_cast<float>(this->_value) / (1 << _fractionalBits);
}

int	Fixed::toInt() const
{
	return (this->_value >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

//	Comparison operators overload
bool Fixed::operator>(Fixed const &other) const
{
	if (_value > other._value)
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const &other) const
{
	if (_value < other._value)
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const &other) const
{
	if (_value >= other._value)
		return (true);
	return (false);	
}

bool Fixed::operator<=(Fixed const &other) const
{
	if (_value <= other._value)
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const &other) const
{
	if (_value == other._value)
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const &other) const
{
	if (_value != other._value)
		return (true);
	return (false);
}


//	Arithmetic operators overload
Fixed Fixed::operator+(Fixed const &other) const
{
	return (_value + other._value);
}

Fixed Fixed::operator-(Fixed const &other) const
{
	return (_value - other._value);
}

Fixed Fixed::operator*(Fixed const &other) const
{
	return (_value * other._value);
}

Fixed Fixed::operator/(Fixed const &other) const
{
	return (_value / other._value);
}

//	Increment/decrement operators overload
Fixed &Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp(*this);

	_value++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);

	_value--;
	return (tmp);
}


//	Static min and max
static Fixed &Fixed::min(Fixed &a, Fixed &b)
{

}

static const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{

}

static Fixed &Fixed::max(Fixed &a, Fixed &b)
{

}

static const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	
}
