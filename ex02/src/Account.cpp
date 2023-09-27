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
  Account::_displayTimestamp();
  std::cout \
    << "accounts:" << Account::_nbAccounts \
    << ";total:" << Account::_totalAmount \
    << ";deposits:" << Account::_totalNbDeposits \
    << ";withdrawals:" << Account::_totalNbWithdrawals \
    << std::endl;
}

void Account::_displayTimestamp( void )
{
  std::time_t time;

  time = std::time(nullptr);
  std::cout << std::put_time(std::localtime(&time), "[%Y%m%d_%H%M%S] ");
}

Account::Account( int initial_deposit ): _amount(initial_deposit)
{
  Account::_totalAmount += initial_deposit;
  this->_accountIndex = Account::_nbAccounts++;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;
  Account::_displayTimestamp();
  std::cout \
    << "index:" << this->_accountIndex \
    << ";amount:" << this->checkAmount() \
    << ";created" << std::endl;
}

Account::~Account( void )
{
  Account::_displayTimestamp();
  std::cout \
    << "index:" << this->_accountIndex \
    << ";amount:" << this->checkAmount() \
    << ";closed" << std::endl;
  Account::_nbAccounts--;
  Account::_totalAmount -= this->checkAmount();
}

void  Account::makeDeposit( int deposit )
{
  int p_amount;

  p_amount = this->checkAmount();
  this->_amount += deposit;
  this->_nbDeposits++;
  Account::_totalAmount += deposit;
  Account::_totalNbDeposits++;
  Account::_displayTimestamp();
  std::cout \
    << "index:" << this->_accountIndex \
    << ";p_amount:" << p_amount \
    << ";deposit:" << deposit \
    << ";amount:" << this->checkAmount() \
    << ";nb_deposits:" << this->_nbDeposits \
    << std::endl;
}

bool  Account::makeWithdrawal( int withdrawal )
{
  Account::_displayTimestamp();
  std::cout \
    << "index:" << this->_accountIndex \
    << ";p_amount:" << this->checkAmount() \
    << ";withdrawal:";
  if (this->checkAmount() < withdrawal)
  {
    std::cout << "refused" << std::endl;
    return (false);
  }
  this->_amount -= withdrawal;
  this->_nbWithdrawals++;
  Account::_totalAmount -= withdrawal;
  Account::_totalNbWithdrawals++;
  std::cout \
    << withdrawal \
    << ";amount:" << this->checkAmount() \
    << ";nb_withdrawals:" << this->_nbWithdrawals \
    << std::endl;
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
    << "index:" << this->_accountIndex \
    << ";amount:" << this->checkAmount() \
    << ";deposits:" << this->_nbDeposits \
    << ";withdrawals:" << this->_nbWithdrawals \
    << std::endl;
}
