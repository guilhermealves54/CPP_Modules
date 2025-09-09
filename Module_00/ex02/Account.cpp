/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:32:47 by gribeiro          #+#    #+#             */
/*   Updated: 2025/09/09 16:09:31 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

//  CONSTRUCTOR AND DESTRUCTOR

Account::Account( int initial_deposit )
{
    //  Start index of accounts and increment for next call
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    
    //  Add initial deposit to account
	_amount = initial_deposit;
	_nbDeposits = 1;

    //  Initializing other vars
	_totalAmount = _amount;
	_totalNbDeposits = _nbDeposits;
	_totalNbWithdrawals = 0;
	_nbWithdrawals = 0;
}

Account::~Account( void ) {}

//  PUBLIC CLASSES

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    //  print everything
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
