/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:49:42 by cchen             #+#    #+#             */
/*   Updated: 2023/09/28 14:50:45 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
  int	index_arg;
  int	index_char;

  if (argc < 2)
  {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
  }
  index_arg = 1;
  while (index_arg < argc)
  {
    index_char = 0;
    while (argv[index_arg][index_char])
      std::cout << (char)std::toupper(argv[index_arg][index_char++]);
    index_arg++;
  }
  std::cout << std::endl;
  return 0;
}
