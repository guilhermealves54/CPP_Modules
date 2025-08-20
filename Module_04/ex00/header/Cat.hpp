/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:56:38 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/20 18:16:02 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "../header/Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &other);
		Cat			&operator=(const Cat &other);
		std::string	getType();
		void		makeSound();
};

#endif