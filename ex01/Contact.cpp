/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:19:23 by oroy              #+#    #+#             */
/*   Updated: 2023/12/19 19:13:28 by oroy             ###   ########.fr       */
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
