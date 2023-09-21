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

std::string    PhoneBook::_readInput(std::string prompt) const
{
  std::string input;

  while (!std::cin.eof() && input == "")
  {
    std::cout << prompt;
    if (std::getline(std::cin, input) && input != "")
      break;
  }
  return (input);
}

void PhoneBook::add(void) {
  std::string input;
  int         index;
  Contact     *contact;

  index = this->_contactCount;
  contact = this->_getContact(index);
  if (index >= MAX_CONTACTS)
    std::cout \
      << "Warning: Overwriting contact info about " \
      << this->_getContact(index)->getFirstName();
  contact->setFirstName(this->_readInput("Enter first name: "));
  contact->setLastName(this->_readInput("Enter last name: "));
  contact->setNickName(this->_readInput("Enter nick name: "));
  contact->setPhoneNumber(this->_readInput("Enter phone number: "));
  contact->setDarkestSecret(this->_readInput("Enter darkest secred: "));
}

void PhoneBook::search(void) {
  Contact contact;
  std::cout << "searchContact called." << std::endl;

  contact = *this->_getContact(0);
  std::cout << contact.getFirstName() << std::endl;
}