/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:16:25 by oroy              #+#    #+#             */
/*   Updated: 2024/01/16 19:22:45 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact
{
private:

	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phonenumber;
	std::string	_darkestsecret;

public:

	Contact(void);
	~Contact(void);
	
	std::string	get_firstname(void) const;
	std::string	get_lastname(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phonenumber(void) const;
	std::string	get_darkestsecret(void) const;
	
	bool		set_firstname(void);
	bool		set_lastname(void);
	bool		set_nickname(void);
	bool		set_phonenumber(void);
	bool		set_darkestsecret(void);

};

#endif
