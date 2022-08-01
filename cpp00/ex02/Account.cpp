/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:31:37 by rmicheli          #+#    #+#             */
/*   Updated: 2022/06/13 12:31:37 by rmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <chrono>
#include <iostream>
#include <iomanip>
#include <chrono>
#include "Account.hpp"
 
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
 
Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}
 
Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << std::endl;
}
 
Account::~Account()
{
	Account::_displayTimestamp();
	this->_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";";	
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}
 
void Account::_displayTimestamp(void)
{
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);
	tm my_tm = *localtime(&time_now);
 
	std::cout << std::setfill('0') << "[" << (my_tm.tm_year + 1900)
		<< std::setw(2) << my_tm.tm_mon
		<< std::setw(2) << my_tm.tm_mday << "_"
		<< std::setw(2) << my_tm.tm_hour
		<< std::setw(2) << my_tm.tm_min
		<< std::setw(2) << my_tm.tm_sec << "] ";
}
 
int Account::getNbAccounts(void)
{
	return _nbAccounts;
}
 
int Account::getTotalAmount(void)
{
	return _totalAmount;
}
 
int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}
 
int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}
 
void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";"
		<< "total:" << Account::getTotalAmount() << ";"
		<< "deposits:" << Account::getNbDeposits() << ";"
		<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}
 
void Account::makeDeposit(int deposit)
{
	if(deposit < 0)
		return;
 
	int old = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
 
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "p_amount:" << old << ";"
	<< "deposit:" << deposit << ";"
	<< "amount:" << this->_amount << ";"
	<< "nb_deposits:" << this->_nbDeposits << std::endl;
}
 
bool Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal < 0){
		return 1;
		}
	int old = this->_amount;
	if(this->_amount >= withdrawal){
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << old << ";"
		<< "withdrawal:" << withdrawal << ";"
		<< "amount:" << this->_amount << ";"
		<< "nb_Withdrawal:" << this->_nbWithdrawals << std::endl;
	}
	else{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << old << ";"
		<< "withdrawal:refused" << std::endl;
	}
	return 0;
}
 
int Account::checkAmount(void) const
{
	return (this->_amount);
}
 
void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}