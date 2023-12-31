/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:53:07 by cchen             #+#    #+#             */
/*   Updated: 2023/09/28 14:53:30 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
  private:
    std::string	_firstName;
    std::string	_lastName;
    std::string	_nickName;
    std::string	_phoneNumber;
    std::string	_darkestSecret;

  public:
    Contact(void);
    ~Contact(void);
    std::string	getFirstName(void) const;
    std::string	getLastName(void) const;
    std::string	getNickName(void) const;
    std::string	getPhoneNumber(void) const;
    std::string	getDarkestSecret(void) const;
    void		setFirstName(std::string firstName);
    void		setLastName(std::string lastName);
    void		setNickName(std::string nickName);
    void		setPhoneNumber(std::string phoneNumber);
    void		setDarkestSecret(std::string darkestSecret);
    void		print(void) const;
};

#endif
