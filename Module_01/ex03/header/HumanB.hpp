/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:45:30 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/04 18:24:20 by gribeiro         ###   ########.fr       */
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
        void    attack();
    private:
        Weapon      Weapon;
        std::string name;
};

#endif