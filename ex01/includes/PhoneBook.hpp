#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8
# include "Contact.hpp"

class PhoneBook {
  private:
    Contact contacts[MAX_CONTACTS];
    int		contactCount;
  public:
    PhoneBook(void);
    ~PhoneBook(void);
    void	addContact(void);
    void	searchContact(void);
};

#endif
