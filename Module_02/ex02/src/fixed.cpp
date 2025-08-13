/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:15:37 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/13 16:09:48 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const int val)
{
	_value = val << _fractionalBits;
}

Fixed::Fixed(const float val)
{
	_value = roundf(val * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
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
	Fixed result;

	result.setRawBits(_value + other._value);
	return (result);
}

Fixed Fixed::operator-(Fixed const &other) const
{
	Fixed result;

	result.setRawBits(_value - other._value);
	return (result);
}

Fixed Fixed::operator*(Fixed const &other) const
{
	Fixed result;
	
	result.setRawBits((_value * other._value) >> _fractionalBits);
	return (result);
}

Fixed Fixed::operator/(Fixed const &other) const
{
	Fixed result;

	result.setRawBits((_value / other._value) << _fractionalBits);
	return (result);
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
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}
