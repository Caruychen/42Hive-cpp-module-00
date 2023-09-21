#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
  std::cout << "Contact created." << std::endl;
  return;
}

Contact::~Contact(void) {
  std::cout << "Contact destroyed." << std::endl;
  return;
}

std::String getFirstName(void) const
{
  return (this->_firstName);
}

std::String getLastName(void) const
{
  return (this->_lastName);
}

std::String getNickName(void) const
{
  return (this->_nickName);
}

std::String getPhoneNumber(void) const
{
  return (this->_phoneNumber);
}

std::String getDarkestSecret(void) const
{
  return (this->_darkestSecret);
}

void setFirstName(std::String firstName)
{
  this->_firstName = firstName;
}

void setLastName(std::String lastName)
{
  this->_lastName = lastName;
}

void setNickName(std::String nickName)
{
  this->_nickName = nickName;
}

void setPhoneNumber(std::String phoneNumber)
{
  this->_phoneNumber = phoneNumber;
}

void setDarkestSecret(std::String darkestSecret)
{
  this->_darkestSecret = darkestSecret;
}
