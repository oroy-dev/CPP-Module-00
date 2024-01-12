/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:22:32 by oroy              #+#    #+#             */
/*   Updated: 2024/01/11 20:59:51 by oroy             ###   ########.fr       */
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
	contact->get_info();
}

void	PhoneBook::display_phonebook(Contact contact[8]) const
{
	std::cout << std::endl << "-----Index" << '|' << "-FirstName" << '|' << "--LastName" << '|' << "--NickName" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::right << std::setw(10) << i << '|';
		std::cout << std::right << std::setw(10) << contact[i].get_firstname() << '|';
		std::cout << std::right << std::setw(10) << contact[i].get_lastname() << '|';
		std::cout << std::right << std::setw(10) << contact[i].get_nickname() << std::endl;
	}
	std::cout << std::endl;
}
