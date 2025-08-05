/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:45:30 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/05 18:41:11 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string H_name);
        ~HumanB();
        void    	attack();
		void		setWeapon(Weapon &w);
    private:
        Weapon      *weapon;
        std::string name;
};

#endif