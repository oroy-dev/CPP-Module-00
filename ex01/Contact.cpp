/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:19:23 by oroy              #+#    #+#             */
/*   Updated: 2024/01/11 20:49:26 by oroy             ###   ########.fr       */
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

void	Contact::get_info(void)
{
	std::cout << "First Name: ";
	std::cin >> this->_firstname;
	std::cout << "Last Name: ";
	std::cin >> this->_lastname;
	std::cout << "Nick Name: ";
	std::cin >> this->_nickname;
	std::cout << "Phone Number: ";
	std::cin >> this->_phonenumber;
	std::cout << "Darkest Secret: ";
	std::cin >> this->_darkestsecret;
}

std::string	Contact::get_firstname(void)
{
	return (this->_firstname);
}

std::string	Contact::get_lastname(void)
{
	return (this->_lastname);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}
