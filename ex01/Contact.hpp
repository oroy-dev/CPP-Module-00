/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:16:25 by oroy              #+#    #+#             */
/*   Updated: 2024/01/11 20:49:53 by oroy             ###   ########.fr       */
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
	
	void	get_info(void);
	std::string	get_firstname(void);
	std::string	get_lastname(void);
	std::string	get_nickname(void);

};

#endif