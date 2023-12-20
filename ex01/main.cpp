/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:24:21 by oroy              #+#    #+#             */
/*   Updated: 2023/12/19 18:51:43 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	buff;

	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
		std::cin >> buff;
		if (buff == "ADD" || buff == "SEARCH" || buff == "EXIT")
			std::cout << "You entered: [" << buff << "]" << std::endl;
	}
	return (0);
}
