/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:24:21 by oroy              #+#    #+#             */
/*   Updated: 2024/01/12 17:00:33 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "PhoneBook.hpp"

bool	is_number(const std::string s)
{
	std::string::const_iterator	it;

	it = s.begin();
	while (it != s.end() && std::isdigit(*it))
		it++;
	return (!s.empty() && it == s.end());
}

int	main(void)
{
	PhoneBook	myphonebook;
	std::string	cmd;
	std::string	idx;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			myphonebook.add_contact(&myphonebook.contact[i]);
			if (++i >= 8)
				i = 0;
		}
		else if (cmd == "SEARCH")
		{
			myphonebook.display_phonebook(myphonebook.contact);
			while (1)
			{
				std::cout << "Enter index to display: ";
				std::cin >> idx;
				if (is_number(idx))
					break ;
			}
			myphonebook.display_contact(&myphonebook.contact[std::stoi(idx)]);
		}
		else if (cmd == "EXIT" || std::cin.eof())
			break ;
	}
	return (0);
}
