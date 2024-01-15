/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:19:23 by oroy              #+#    #+#             */
/*   Updated: 2024/01/15 16:31:57 by oroy             ###   ########.fr       */
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
	while (1)
	{
		std::cout << "First Name: ";
		getline (std::cin, this->_firstname);
		if (!this->_firstname.empty())
			break ;
		if (std::cin.eof())
			exit(0);
		std::cout << "[Field cannot be empty]: ";
	}
}

void	Contact::set_lastname(void)
{
	while (1)
	{
		std::cout << "Last Name: ";
		getline (std::cin, this->_lastname);
		if (!this->_lastname.empty())
			break ;
		if (std::cin.eof())
			exit(0);
		std::cout << "[Field cannot be empty]: ";
	}
}

void	Contact::set_nickname(void)
{
	while (1)
	{
		std::cout << "Nick Name: ";
		getline (std::cin, this->_nickname);
		if (!this->_nickname.empty())
			break ;
		if (std::cin.eof())
			exit(0);
		std::cout << "[Field cannot be empty]: ";
	}	
}

void	Contact::set_phonenumber(void)
{
	while (1)
	{
		std::cout << "Phone Number: ";
		getline (std::cin, this->_phonenumber);
		if (!this->_phonenumber.empty())
			break ;
		if (std::cin.eof())
			exit(0);
		std::cout << "[Field cannot be empty]: ";
	}
}

void	Contact::set_darkestsecret(void)
{
	while (1)
	{
		std::cout << "Darkest Secret: ";
		getline (std::cin, this->_darkestsecret);
		if (!this->_darkestsecret.empty())
			break ;
		if (std::cin.eof())
			exit(0);
		std::cout << "[Field cannot be empty]: ";
	}
}
