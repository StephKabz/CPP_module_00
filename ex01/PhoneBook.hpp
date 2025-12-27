/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 14:43:56 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/27 04:22:27 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include "Contact.hpp"


class PhoneBook {

public:
	PhoneBook();
	~PhoneBook();

	void	addContact();
	void	searchContact();

private:
	int		count;
	int		index;
	Contact	contacts[8];	
	std::string	truncate(std::string str);
};

#endif
