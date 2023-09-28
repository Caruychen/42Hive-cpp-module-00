/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:55:59 by cchen             #+#    #+#             */
/*   Updated: 2023/09/28 14:56:24 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "List.hpp"

PhoneBook::PhoneBook(void)
{
  this->_contactCount = 0;
}

PhoneBook::~PhoneBook(void)
{
}

Contact		*PhoneBook::_getContact(int index)
{
  return (&this->_contacts[index % MAX_CONTACTS]);
}

std::string	PhoneBook::_readInput(std::string prompt) const
{
  std::string input;

  while (!std::cin.eof())
  {
    std::cout << prompt;
    if (std::getline(std::cin, input) && input != "")
      break;
  }
  return (input);
}

void		PhoneBook::_displayTable(void) const
{
  List  list;
  Contact contact;
  int   index;
  int   total;

  index = 0;
  total = std::min(this->_contactCount, MAX_CONTACTS);
  list.printHeaderRow();
  while (index < total)
  {
    contact = this->_contacts[index % MAX_CONTACTS];
    list.printRow(
        std::to_string(index),
        contact.getFirstName(),
        contact.getLastName(),
        contact.getNickName(),
        index >= (total - 1)
        );
    index++;
  }

}

void		PhoneBook::add(void)
{
  int         index;
  Contact     *contact;
  std::string input;

  index = this->_contactCount;
  contact = this->_getContact(index);
  if (index >= MAX_CONTACTS)
    std::cout \
      << "Warning: Overwriting contact info about " \
      << contact->getFirstName() \
      << std::endl;
  contact->setFirstName(this->_readInput("Enter first name: "));
  contact->setLastName(this->_readInput("Enter last name: "));
  contact->setNickName(this->_readInput("Enter nick name: "));
  contact->setPhoneNumber(this->_readInput("Enter phone number: "));
  contact->setDarkestSecret(this->_readInput("Enter darkest secret: "));
  this->_contactCount++;
}

void		PhoneBook::search(void)
{
  std::string input;
  int         index;

  if (this->_contactCount <= 0)
  {
    std::cout << "Phonebook empty!" << std::endl;
    return;
  }
  this->_displayTable();
  input = this->_readInput("Enter an index to search: ");
  index = input[0] - '0';
  if (input.size() != 1 || index < 0 || index >= MAX_CONTACTS)
  {
    std::cout << "Error: Invalid index!" << std::endl;
    return ;
  }
  this->_contacts[index].print();
}
