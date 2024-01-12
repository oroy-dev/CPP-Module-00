/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:24:21 by oroy              #+#    #+#             */
/*   Updated: 2024/01/11 21:00:29 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	myphonebook;
	std::string	input;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
		std::cin >> input;
		if (input == "ADD")
		{
			myphonebook.add_contact(&myphonebook.contact[i]);
			if (++i >= 8)
				i = 0;
		}
		if (input == "SEARCH")
			myphonebook.display_phonebook(myphonebook.contact);
		if (input == "EXIT" || std::cin.eof())
			break;
	}
	return (0);
}
