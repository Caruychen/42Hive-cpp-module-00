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
    void	add(void);
    void	search(void);
};

#endif
