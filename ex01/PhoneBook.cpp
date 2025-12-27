/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 01:54:35 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/27 20:10:51 by stkabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	count = 0;
	index = 0;
}

PhoneBook::~PhoneBook(){};

std::string	PhoneBook::truncate(std::string str){
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::addContact(){

	Contact		contact;
	std::string	input;

	do {
		std::cout << "Enter first name : ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setFirstName(input);

	do {
		std::cout << "Enter last name : ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setLastName(input);

	do {
		std::cout << "Enter nickname : ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setNickName(input);

	do {
		std::cout << "Enter phone number : ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setPhoneNumber(input);

	do {
		std::cout << "Enter darkest secret : ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setDarkestSecret(input);

	contacts[index] = contact;
	index = (index + 1) % 8;
	if (count < 8)
		count++;
}
void	PhoneBook::searchContact(){

	std::string	input;
	int			idx;
	bool		valid;

	valid = false;

	if (count == 0)
	{
		std::cout << "PhoneBook empty!" << std::endl;
		return;
	}
	std::cout << std::setw(10) << std::right << "index" << "|";
	std::cout << std::setw(10) << std::right << "First name" << "|";
	std::cout << std::setw(10) << std::right << "Last name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << truncate(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << truncate(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << truncate(contacts[i].getNickName()) << std::endl;
	}
	
	do
	{
		std::cout << "Enter index : ";
		std::getline(std::cin, input);
		idx = std::atoi(input.c_str());
		if (idx >= 0 && idx < count)
		{
			valid = true;
			contacts[idx].displayContact();
		}
		else
			std::cout << "Error! Enter a Valid index!" << std::endl;
	} while (!valid);
	
};
