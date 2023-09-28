/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:54:02 by cchen             #+#    #+#             */
/*   Updated: 2023/09/28 14:54:31 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8
# include "Contact.hpp"

class PhoneBook
{
  private:
    Contact		_contacts[MAX_CONTACTS];
    int			_contactCount;
    Contact		*_getContact(int index);
    std::string	_readInput(std::string prompt) const;
    void		_displayTable(void) const;

  public:
    PhoneBook(void);
    ~PhoneBook(void);
    void		add(void);
    void		search(void);
};

#endif
