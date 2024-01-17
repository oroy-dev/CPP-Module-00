/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:19:23 by oroy              #+#    #+#             */
/*   Updated: 2024/01/17 17:43:37 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Contact instance created" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Contact instance destroyed" << std::endl;
	return ;
}

std::string	Contact::get_firstname(void) const
{
	return (_firstname);
}

std::string	Contact::get_lastname(void) const
{
	return (_lastname);
}

std::string	Contact::get_nickname(void) const
{
	return (_nickname);
}

std::string	Contact::get_phonenumber(void) const
{
	return (_phonenumber);
}

std::string	Contact::get_darkestsecret(void) const
{
	return (_darkestsecret);
}

bool	Contact::set_firstname(void)
{
	while (1)
	{
		std::cout << "First Name: ";
		getline (std::cin, _firstname);
		if (!_firstname.empty())
			break ;
		if (std::cin.eof())
			return (false);
		std::cout << "[Field cannot be empty]: ";
	}
	return (true);
}

bool	Contact::set_lastname(void)
{
	while (1)
	{
		std::cout << "Last Name: ";
		getline (std::cin, _lastname);
		if (!_lastname.empty())
			break ;
		if (std::cin.eof())
			return (false);
		std::cout << "[Field cannot be empty]: ";
	}
	return (true);
}

bool	Contact::set_nickname(void)
{
	while (1)
	{
		std::cout << "Nick Name: ";
		getline (std::cin, _nickname);
		if (!_nickname.empty())
			break ;
		if (std::cin.eof())
			return (false);
		std::cout << "[Field cannot be empty]: ";
	}
	return (true);
}

bool	Contact::set_phonenumber(void)
{
	while (1)
	{
		std::cout << "Phone Number: ";
		getline (std::cin, _phonenumber);
		if (!_phonenumber.empty())
			break ;
		if (std::cin.eof())
			return (false);
		std::cout << "[Field cannot be empty]: ";
	}
	return (true);
}

bool	Contact::set_darkestsecret(void)
{
	while (1)
	{
		std::cout << "Darkest Secret: ";
		getline (std::cin, _darkestsecret);
		if (!_darkestsecret.empty())
			break ;
		if (std::cin.eof())
			return (false);
		std::cout << "[Field cannot be empty]: ";
	}
	return (true);
}
