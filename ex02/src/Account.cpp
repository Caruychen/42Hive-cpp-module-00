#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int  Account::getNbAccounts( void )
{
  return Account::_nbAccounts;
}

int  Account::getTotalAmount( void )
{
  return Account::_totalAmount;
}

int Account::getNbDeposits( void )
{
  return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
  return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
}

void Account::_displayTimestamp( void )
{
  std::time_t time;

  time = std::time(nullptr);
  std::cout << "[" << std::put_time(std::localtime(&time), "%Y%m%d_%H%M%S") << "] ";
}

Account::Account( int initial_deposit ): _amount(initial_deposit)
{
  Account::_totalAmount += initial_deposit;
  this->_accountIndex = Account::_nbAccounts++;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;
}

Account::~Account( void )
{
  Account::_displayTimestamp();
  std::cout << "index:" << Account::_nbAccounts << ";amount:" << Account::_amount << ";closed" << std::endl;
}

void  Account::makeDeposit( int deposit )
{
  this->_amount += deposit;
  this->_nbDeposits++;
  Account::_totalAmount += deposit;
  Account::_totalNbDeposits++;
}

bool  Account::makeWithdrawal( int withdrawal )
{
  this->_amount -= withdrawal;
  this->_nbWithdrawals++;
  Account::_totalAmount -= withdrawal;
  Account::_totalNbWithdrawals++;
  return (true);
}

int  Account::checkAmount( void ) const
{
  return this->_amount;
}

void  Account::displayStatus( void ) const
{
  Account::_displayTimestamp();
  std::cout \
    << "index:" << Account::_nbAccounts \
    << ";amount:" << Account::_amount \
    << ";deposits:" << this->_nbDeposits \
    << ";withdrawals:" << this->_nbWithdrawals \
    << std::endl;
}
