/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:19:23 by oroy              #+#    #+#             */
/*   Updated: 2024/01/14 18:26:26 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact instance created" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact instance destroyed" << std::endl;
	return ;
}

std::string	Contact::get_firstname(void) const
{
	return (this->_firstname);
}

std::string	Contact::get_lastname(void) const
{
	return (this->_lastname);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_phonenumber(void) const
{
	return (this->_phonenumber);
}

std::string	Contact::get_darkestsecret(void) const
{
	return (this->_darkestsecret);
}

void	Contact::set_firstname(void)
{
	std::cout << "First Name: ";
	getline (std::cin, this->_firstname);
	if (std::cin.eof())
		exit(0);
}

void	Contact::set_lastname(void)
{
	std::cout << "Last Name: ";
	getline (std::cin, this->_lastname);
	if (std::cin.eof())
		exit(0);
}

void	Contact::set_nickname(void)
{
	std::cout << "Nick Name: ";
	getline (std::cin, this->_nickname);
	if (std::cin.eof())
		exit(0);
}

void	Contact::set_phonenumber(void)
{
	std::cout << "Phone Number: ";
	getline (std::cin, this->_phonenumber);
	if (std::cin.eof())
		exit(0);
}

void	Contact::set_darkestsecret(void)
{
	std::cout << "Darkest Secret: ";
	getline (std::cin, this->_darkestsecret);
	if (std::cin.eof())
		exit(0);
}
