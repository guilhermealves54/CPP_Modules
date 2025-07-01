/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:32:47 by gribeiro          #+#    #+#             */
/*   Updated: 2025/07/01 15:37:35 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

//  CONSTRUCTOR AND DESTRUCTOR

Account::Account( int initial_deposit )
{
    
}

Account::~Account( void )
{
    
}

//  PUBLIC CLASSES

int	Account::getNbAccounts( void )
{
    
}

int	Account::getTotalAmount( void )
{
    
}

int	Account::getNbDeposits( void )
{
    
}

int	Account::getNbWithdrawals( void )
{

}

void	Account::displayAccountsInfos( void )
{
    
}

void	Account::makeDeposit( int deposit )
{
    
}

bool	Account::makeWithdrawal( int withdrawal )
{
    
}

int		Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{
    
}

//  PRIVATE CLASSES

void	Account::_displayTimestamp( void )
{
    std::time_t relog = std::time(NULL);
    std::tm *lt = std::localtime(&relog);

    std::cout 
        << "["
        << std::setfill('0') << std::setw(4) << lt->tm_year + 1900
        << std::setw(2) << lt->tm_mon + 1
        << std::setw(2) << lt->tm_mday 
        << "_"
        << std::setw(2) << lt->tm_hour
        << std::setw(2) << lt->tm_min
        << std::setw(2) << lt->tm_sec
        << "] ";
}
