/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:20:35 by oroy              #+#    #+#             */
/*   Updated: 2024/01/14 18:01:37 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <sstream>
# include "Contact.hpp"

# define CONTACT_TOTAL 8

class PhoneBook
{
private:

	std::string	_get_substr(std::string const str) const;

public:

	PhoneBook(void);
	~PhoneBook(void);
	
	Contact		contact[CONTACT_TOTAL];
	
	void		add_contact(Contact *contact);
	void		display_contact(Contact *contact) const;
	void		display_phonebook(Contact contact[CONTACT_TOTAL]) const;

};

#endif
