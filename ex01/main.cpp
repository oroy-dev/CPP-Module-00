/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:24:21 by oroy              #+#    #+#             */
/*   Updated: 2024/01/10 16:02:58 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static void	display_phonebook(void)
{
	
}

static void	add_contact(std::string contact[5])
{
	// std::string	firstname;
	// std::string	lastname;
	// std::string	nickname;
	// std::string	phonenumber;
	// std::string	darkestsecret;

	std::cout << "First Name: ";
	std::cin >> contact[0];
	std::cout << "Last Name: ";
	std::cin >> contact[1];
	std::cout << "Nick Name: ";
	std::cin >> contact[2];
	std::cout << "Phone Number: ";
	std::cin >> contact[3];
	std::cout << "Darkest Secret: ";
	std::cin >> contact[4];
}

int	main(void)
{
	std::string	input;
	std::string	contacts[8][5];
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
		std::cin >> input;
		if (input == "ADD")
		{
			add_contact(contacts[i]);
			if (++i >= 8)
				i = 0;
		}
		if (input == "SEARCH")
			std::cout << "You entered: [" << input << "]" << std::endl;
		if (input == "EXIT" || std::cin.eof())
			break;
	}
	return (0);
}
