#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

// ************************************************************************** //
// STATIC ******************************************************************* //
// ************************************************************************** //

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int  Account::getNbAccounts( void )
{
  return t::_nbAccounts;
}

int  Account::getTotalAmount( void )
{
  return t::_totalAmount;
}

int Account::getNbDeposits( void )
{
  return t::_totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
  return t::_totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
  t::_displayTimestamp();
  std::cout \
    << "accounts:" << t::_nbAccounts \
    << ";total:" << t::_totalAmount \
    << ";deposits:" << t::_totalNbDeposits \
    << ";withdrawals:" << t::_totalNbWithdrawals \
    << std::endl;
}

void Account::_displayTimestamp( void )
{
  std::time_t time;

  time = std::time(nullptr);
  std::cout << std::put_time(std::localtime(&time), "[%Y%m%d_%H%M%S] ");
}

// ************************************************************************** //
// PUBLIC ******************************************************************* //
// ************************************************************************** //

Account::Account( int initial_deposit ): _amount(initial_deposit)
{
  t::_totalAmount += initial_deposit;
  this->_accountIndex = t::_nbAccounts++;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;
  t::_displayTimestamp();
  std::cout \
    << "index:" << this->_accountIndex \
    << ";amount:" << this->checkAmount() \
    << ";created" << std::endl;
}

Account::~Account( void )
{
  t::_displayTimestamp();
  std::cout \
    << "index:" << this->_accountIndex \
    << ";amount:" << this->checkAmount() \
    << ";closed" << std::endl;
  t::_nbAccounts--;
  t::_totalAmount -= this->checkAmount();
}

void  Account::makeDeposit( int deposit )
{
  int p_amount;

  p_amount = this->checkAmount();
  this->_amount += deposit;
  this->_nbDeposits++;
  t::_totalAmount += deposit;
  t::_totalNbDeposits++;
  t::_displayTimestamp();
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
  t::_displayTimestamp();
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
  t::_totalAmount -= withdrawal;
  t::_totalNbWithdrawals++;
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
  t::_displayTimestamp();
  std::cout \
    << "index:" << this->_accountIndex \
    << ";amount:" << this->checkAmount() \
    << ";deposits:" << this->_nbDeposits \
    << ";withdrawals:" << this->_nbWithdrawals \
    << std::endl;
}
