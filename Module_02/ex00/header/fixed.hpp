/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 17:27:07 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/11 15:51:57 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &);
		int		getRawBits() const;
		void	setRawBits(int const raw);
	private:
		int					_value;
		static const int	_fractionalBits = 8;
};

#endif
