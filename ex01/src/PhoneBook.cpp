#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
  this->_contactCount = 0;
  std::cout << "PhoneBook created." << std::endl;
}

PhoneBook::~PhoneBook(void) {
  std::cout << "PhoneBook destroyed." << std::endl;
  return;
}

Contact *PhoneBook::_getContact(int index)
{
  return (&this->_contacts[index % MAX_CONTACTS]);
}

std::string PhoneBook::_readInput(std::string prompt) const
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

void PhoneBook::add(void) {
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

void PhoneBook::search(void) {
  Contact contact;
  std::cout << "searchContact called." << std::endl;

  contact = *this->_getContact(0);
  std::cout << contact.getFirstName() << std::endl;
}
