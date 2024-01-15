/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:22:32 by oroy              #+#    #+#             */
/*   Updated: 2024/01/15 16:27:31 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook instance created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook instance destroyed" << std::endl;
	return ;
}

std::string	PhoneBook::_get_substr(std::string const str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
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
	std::cout << "First Name: " << contact->get_firstname() << std::endl;
	std::cout << "Last Name: " << contact->get_lastname() << std::endl;
	std::cout << "Nick Name: " << contact->get_nickname() << std::endl;
	std::cout << "Phone Number: " << contact->get_phonenumber() << std::endl;
	std::cout << "Darkest Secret: " << contact->get_darkestsecret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::display_phonebook(Contact contact[CONTACT_TOTAL]) const
{
	std::cout << std::endl;
	std::cout << std::right << std::setw(10) << "Index" << '|';
	std::cout << std::right << std::setw(10) << "First Name" << '|';
	std::cout << std::right << std::setw(10) << "Last Name" << '|';
	std::cout << std::right << std::setw(10) << "Nick Name" << std::endl;
	for (int i = 0; i < CONTACT_TOTAL; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << '|';
		std::cout << std::right << std::setw(10) << this->_get_substr(contact[i].get_firstname()) << '|';
		std::cout << std::right << std::setw(10) << this->_get_substr(contact[i].get_lastname()) << '|';
		std::cout << std::right << std::setw(10) << this->_get_substr(contact[i].get_nickname()) << std::endl;
	}
	std::cout << std::endl;
}

