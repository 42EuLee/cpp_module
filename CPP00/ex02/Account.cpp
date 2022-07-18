#include "Account.hpp"

#include <string>
#include <iostream>
#include <time.h>
using std::cout;
using std::endl;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp(void)
{
	time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y%m_%d%M%S", &tstruct);
	cout << "[" << buf << "]";
}

void	Account::displayStatus(void)const
{
	_displayTimestamp();
	cout << " index:" << this->_accountIndex << ";amount:" << this->_amount 
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals 
		<< endl;
}


void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals
		<< endl;
	
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount 
		<< ";deposit:" << deposit << ";amount:" << this->_amount + deposit 
		<< ";nb_deposits:" << this->_nbDeposits << endl;
	this->_totalAmount += deposit;	
	this->_amount += deposit;	
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		cout << ";withdrawal:refused" << endl;
		return (false);
	}
	else
	{	
		_nbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount
			<< ";nb_withdrawals:" << _nbWithdrawals << endl;
	}
	return (true);
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	cout << " index:" << this->_accountIndex << ";amount:" << this->_amount 
		<< ";created" << endl;
}

Account::~Account()
{
	_displayTimestamp();
	cout << " index:" << this->_accountIndex << ";amount:" << this->_amount 
	<< ";closed" << endl;
	return ;
}
