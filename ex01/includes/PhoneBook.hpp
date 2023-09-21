#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8
# include "Contact.hpp"

class PhoneBook {
  private:
    Contact     _contacts[MAX_CONTACTS];
    int         _contactCount;
    Contact     *_getContact(int index);
    std::string _readInput(std::string prompt) const;

  public:
    PhoneBook(void);
    ~PhoneBook(void);
    void	add(void);
    void	search(void);
};

#endif
