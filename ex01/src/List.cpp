#include "List.hpp"
#include <iostream>
#include <iomanip>

List::List(void)
{
  return ;
}

List::~List(void)
{
  return ;
}

void List::_printEntry(std::string str) const
{
  if (str.length() > MAX_FIELD_WIDTH)
  {
    str.resize(MAX_FIELD_WIDTH);
    str[str.size() - 1] = '.';
  }
  std::cout << "|" << std::right << std::setw(MAX_FIELD_WIDTH) << str;
}

void List::_printBoundary(void) const
{
  std::cout \
    << " " \
    << std::setfill('-') \
    << std::setw((MAX_FIELD_WIDTH + 1) * COLUMN_NUM) \
    << " " \
    << std::endl;
}

void List::_printRowSeparator(void) const
{
  int columns;

  columns = COLUMN_NUM;
  std::cout << std::setfill('-');
  while (columns-- > 0)
    std::cout << "|" << std::setw(MAX_FIELD_WIDTH + 1);
  std::cout << "|" << std::endl;
}

void List::printRow(
    std::string index,
    std::string firstName,
    std::string lastName,
    std::string nickname,
    bool isLastRow
    ) const
{
    std::cout << std::setfill(' ');
    this->_printEntry(index);
    this->_printEntry(firstName);
    this->_printEntry(lastName);
    this->_printEntry(nickname);
    std::cout << "|" << std::endl;
    if (!isLastRow)
      this->_printRowSeparator();
    else
      this->_printBoundary();
}

void List::printHeaderRow(void) const
{
  this->_printBoundary();
  this->printRow("Index", "First Name", "Last Name", "Nickname");
}
