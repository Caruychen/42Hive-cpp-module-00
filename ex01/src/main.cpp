/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:56:26 by cchen             #+#    #+#             */
/*   Updated: 2023/09/28 14:56:32 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
  PhoneBook   phonebook;
  std::string command;

  while (command != "EXIT")
  {
    std::cout << "Enter a command: ";
    std::getline(std::cin, command);
    if (command == "ADD")
      phonebook.add();
    if (command == "SEARCH")
      phonebook.search();
    if (std::cin.eof())
      break;
  }
  std::cout << "Goodbye!" << std::endl;
  return (0);
}
