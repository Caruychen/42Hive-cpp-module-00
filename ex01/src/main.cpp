#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
  PhoneBook phonebook;

  phonebook.addContact();
  phonebook.searchContact();

  return 0;
}
