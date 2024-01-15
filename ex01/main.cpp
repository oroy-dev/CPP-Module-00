/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:24:21 by oroy              #+#    #+#             */
/*   Updated: 2024/01/15 16:35:30 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	is_positivenumber(const std::string s)
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
	int			num;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
		getline(std::cin, cmd);
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
				std::cout << "Enter index to display (1 to " << CONTACT_TOTAL << "): ";
				getline(std::cin, idx);
				if (is_positivenumber(idx))
				{
					std::istringstream(idx) >> num;
					if (num > 0 && num <= CONTACT_TOTAL)
					{
						myphonebook.display_contact(&myphonebook.contact[num - 1]);
						break;
					}
				}	
				std::cout << "[Incorrect value] ";
			}
		}
		else if (cmd == "EXIT" || std::cin.eof())
			break;
	}
	return (0);
}
