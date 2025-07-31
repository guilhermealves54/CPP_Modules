/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:18:01 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/31 01:30:58 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	public:
		Weapon(const std::string& type);
		~Weapon();
		void				setType(const std::string& type);
		const std::string&	getType() const;
	private:
		std::string			type;
};

#endif