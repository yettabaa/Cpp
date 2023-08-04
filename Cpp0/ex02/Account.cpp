/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:50:17 by yettabaa          #+#    #+#             */
/*   Updated: 2023/08/04 08:07:45 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include<iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(_totalNbWithdrawals);
}

int	Account::checkAmount( void ) const
{
	return(_amount);
}

void Account::_displayTimestamp( void )
{
	time_t     now = time(0);
	struct tm  ts;
	ts = *localtime(&now);
	std::cout << std::setfill('0')  << "[" 
									<< std::setw(4) << ts.tm_year + 1900
									<< std::setw(2) << ts.tm_mon + 1
									<< std::setw(2) << ts.tm_mday
									<< std::setw(1) << "_"
									<< std::setw(2) << ts.tm_hour
									<< std::setw(2) << ts.tm_min
									<< std::setw(2) << ts.tm_sec
									<< "] "
									;                        
}

Account::Account( int initial_deposit )
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_accountIndex =  _nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout   << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout   << "index:" << _accountIndex << ";"
				<< "amount:" << checkAmount() << ";"
				<< "closed" << std::endl;
}

void	Account::displayAccountsInfos( void )//1
{
	_displayTimestamp();
	std::cout   << "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void	Account::displayStatus( void ) const//2
{
	_displayTimestamp();
	std::cout   << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit( int deposit )//3
{
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += deposit;
	 _displayTimestamp();
	std::cout   << "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << _amount + deposit << ";"
				<< "nb_deposits:" << _nbDeposits
				<< std::endl;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout   << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";";
	if (_amount - withdrawal >= 0)
	{
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		 std::cout << "withdrawal:" << withdrawal << ";"
					<< "amount:" << _amount - withdrawal << ";"
					<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
		_amount -= withdrawal;
		return(true);           
	}
	_nbWithdrawals = 0;
	std::cout << "withdrawal:refused" << std::endl;
	return(false);
}