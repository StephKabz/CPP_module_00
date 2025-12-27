/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:42:30 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/27 02:54:47 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>


class Contact {

public:
	Contact();
	~Contact();

	void		setFirstName(std::string name);
	std::string	getFirstName();
	void		setLastName(std::string name);
	std::string	getLastName();
	void		setNickName(std::string name);
	std::string	getNickName();
	void		setPhoneNumber(std::string number);
	std::string	getPhoneNumber();
	void		setDarkestSecret(std::string secret);
	std::string	getDarkestSecret();
	void		displayContact();

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

};

#endif