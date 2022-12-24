#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout
	<< "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit ) 
: _accountIndex(_nbAccounts)
, _amount(initial_deposit) 
, _nbDeposits(0)
, _nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout 
	<< "index:" << _accountIndex 
	<< ";amount:" << _amount 
	<< ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout 
	<< "index:" << _accountIndex 
	<< ";amount:" << _amount
	<< ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	int	p_amount = _amount;

	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << p_amount
	<< ";deposit:" << deposit
	<< ";amount:" << _amount
	<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {

}

int		Account::checkAmount( void ) const {

}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t	t = std::time(nullptr);
	std::tm*	now = std::localtime(&t);

	std::cout << "["
    << (now->tm_year + 1900)
    << std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
    << std::setw(2) << std::setfill('0') << now->tm_mday << "_" 
    << std::setw(2) << std::setfill('0') << now->tm_hour 
    << std::setw(2) << std::setfill('0') << now->tm_min 
    << std::setw(2) << std::setfill('0') << now->tm_sec
    << "] " << std::endl;
}
