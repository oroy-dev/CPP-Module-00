/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:19:23 by oroy              #+#    #+#             */
/*   Updated: 2024/01/12 16:48:39 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact instance created" << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Contact instance destroyed" << std::endl;
	return;
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

void	Contact::get_allinfo(void) const
{
	std::cout << "First Name: " << this->_firstname << std::endl;
	std::cout << "Last Name: " << this->_lastname << std::endl;
	std::cout << "Nick Name: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phonenumber << std::endl;
	std::cout << "Darkest Secret: " << this->_darkestsecret << std::endl;
}

void	Contact::set_firstname(void)
{
	std::cout << "First Name: ";
	std::cin >> this->_firstname;
}

void	Contact::set_lastname(void)
{
	std::cout << "Last Name: ";
	std::cin >> this->_lastname;
}

void	Contact::set_nickname(void)
{
	std::cout << "Nick Name: ";
	std::cin >> this->_nickname;
}

void	Contact::set_phonenumber(void)
{
	std::cout << "Phone Number: ";
	std::cin >> this->_phonenumber;
}

void	Contact::set_darkestsecret(void)
{
	std::cout << "Darkest Secret: ";
	std::cin >> this->_darkestsecret;
}
