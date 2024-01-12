/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:22:32 by oroy              #+#    #+#             */
/*   Updated: 2024/01/12 16:55:45 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook instance created" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook instance destroyed" << std::endl;
	return;
}

void	PhoneBook::add_contact(Contact *contact)
{
	contact->set_firstname();
	contact->set_lastname();
	contact->set_nickname();
	contact->set_phonenumber();
	contact->set_darkestsecret();
}

void	PhoneBook::display_contact(Contact *contact) const
{
	std::cout << std::endl;
	contact->get_allinfo();
	std::cout << std::endl;
}

void	PhoneBook::display_phonebook(Contact contact[8]) const
{
	std::cout << std::endl;
	std::cout << std::right << std::setw(10) << "Index" << '|';
	std::cout << std::right << std::setw(10) << "First Name" << '|';
	std::cout << std::right << std::setw(10) << "Last Name" << '|';
	std::cout << std::right << std::setw(10) << "Nick Name" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << '|';
		std::cout << std::right << std::setw(10) << contact[i].get_firstname() << '|';
		std::cout << std::right << std::setw(10) << contact[i].get_lastname() << '|';
		std::cout << std::right << std::setw(10) << contact[i].get_nickname() << std::endl;
	}
	std::cout << std::endl;
}
