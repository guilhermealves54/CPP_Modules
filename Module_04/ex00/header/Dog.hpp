/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:56:35 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/20 18:16:09 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "../header/Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog			&operator=(const Dog &other);
		std::string	getType();
		void		makeSound();
};

#endif