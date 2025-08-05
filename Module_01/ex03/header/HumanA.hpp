/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:45:48 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/05 18:39:21 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string H_name, Weapon &w);
        ~HumanA();
        void    	attack();
    private:
        Weapon		&weapon;
        std::string name;
};

#endif
