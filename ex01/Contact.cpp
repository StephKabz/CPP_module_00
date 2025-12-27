/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:41:40 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/27 05:01:15 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	firstName = "";
	lastName = "";
	nickname = "";
	phoneNumber = "";
	darkestSecret = "";	
}

void	Contact::setFirstName(std::string name){
	firstName = name;
};
void	Contact::setLastName(std::string name){
	lastName = name;
};
void	Contact::setNickName(std::string name){
	nickname = name;
};
void	Contact::setPhoneNumber(std::string number){
	phoneNumber = number;
};
void	Contact::setDarkestSecret(std::string secret){
	darkestSecret = secret;
};
std::string	Contact::getFirstName(){
	return (firstName);
};
std::string	Contact::getLastName(){
	return (lastName);
};
std::string	Contact::getNickName(){
	return (nickname);
};
std::string	Contact::getPhoneNumber(){
	return (phoneNumber);
};
std::string	Contact::getDarkestSecret(){
	return (darkestSecret);
};

void	Contact::displayContact(){
	std::cout << "First name : " << firstName << std::endl;
	std::cout << "Last name : " << lastName << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone number : " << phoneNumber << std::endl;
	std::cout << "Darkest secret " << darkestSecret;
};

Contact::~Contact(){};
