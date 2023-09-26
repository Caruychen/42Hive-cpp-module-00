#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

std::string Contact::getFirstName(void) const
{
  return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
  return (this->_lastName);
}

std::string Contact::getNickName(void) const
{
  return (this->_nickName);
}

std::string Contact::getPhoneNumber(void) const
{
  return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
  return (this->_darkestSecret);
}

void Contact::setFirstName(std::string firstName)
{
  this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
  this->_lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
  this->_nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
  this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
  this->_darkestSecret = darkestSecret;
}

void Contact::print(void) const
{
  if (this->getFirstName().empty())
  {
    std::cout << "No contact found." << std::endl;
    return ;
  }
  std::cout << "First Name: " << this->getFirstName() << std::endl;
  std::cout << "Last Name: " << this->getLastName() << std::endl;
  std::cout << "Nick Name: " << this->getNickName() << std::endl;
  std::cout << "Phone Number: " << this->getPhoneNumber() << std::endl;
  std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
}
