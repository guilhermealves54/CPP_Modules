/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:45:48 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/04 17:54:09 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "weapon.hpp"

class HumanA
{
    public:
        HumanA();
        ~HumanA();
        void    attack();
    private:
        Weapon      Weapon;
        std::string name;
};

#endif
