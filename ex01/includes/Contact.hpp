#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
  private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;

  public:
    Contact(void);
    ~Contact(void);
    std::String getFirstName(void) const;
    std::String getLastName(void) const;
    std::String getNickName(void) const;
    std::String getPhoneNumber(void) const;
    std::String getDarkestSecret(void) const;
    void setFirstName(std::String firstName);
    void setLastName(std::String lastName);
    void setNickName(std::String nickName);
    void setPhoneNumber(std::String phoneNumber);
    void setDarkestSecret(std::String darkestSecret);
};

#endif
