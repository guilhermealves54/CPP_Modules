/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:25:58 by gribeiro          #+#    #+#             */
/*   Updated: 2025/08/08 11:48:45 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <map>

class   Harl
{
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
    private:
        void    debug();
        void    info();
        void    warning();
        void    error();
};

#endif