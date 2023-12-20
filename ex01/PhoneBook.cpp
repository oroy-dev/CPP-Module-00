/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:22:32 by oroy              #+#    #+#             */
/*   Updated: 2023/12/19 19:11:42 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
