/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:20:35 by oroy              #+#    #+#             */
/*   Updated: 2024/01/12 16:55:57 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
private:

public:

	Contact	contact[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	add_contact(Contact *contact);
	void	display_contact(Contact *contact) const;
	void	display_phonebook(Contact contact[8]) const;

};

#endif
