#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
  this->contactCount = 0;
  std::cout << "PhoneBook created." << std::endl;
}

PhoneBook::~PhoneBook(void) {
  std::cout << "PhoneBook destroyed." << std::endl;
  return;
}

void PhoneBook::addContact(void) {
  std::cout << "addContact called." << std::endl;
}

void PhoneBook::searchContact(void) {
  std::cout << "searchContact called." << std::endl;
}
