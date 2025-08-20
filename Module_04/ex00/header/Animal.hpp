/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:56:40 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/20 18:06:20 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMNAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &other);
		Animal	&operator=(const Animal &other);
		~Animal();
	protected:
		std::string	type;
};

#endif
