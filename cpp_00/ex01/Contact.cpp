/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:32:29 by feden-pe          #+#    #+#             */
/*   Updated: 2024/06/15 18:33:15 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void	Contact::addFirstName() {
	std::string input;

	if (std::cin.eof())
		return ;
	std::cout << "First Name: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		this->addFirstName();
		return ;
	}
	this->first_name = input;
}

void	Contact::addSurname() {
	std::string input;

	if (std::cin.eof())
		return ;
	std::cout << "Surname: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		this->addSurname();
		return ;
	}
	this->surname = input;
}

void	Contact::addNickname() {
	std::string input;

	if (std::cin.eof())
		return ;
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		this->addNickname();
		return ;
	}
	this->nickname = input;
}

void	Contact::addSecret() {
	std::string input;

	if (std::cin.eof())
		return ;
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		this->addSecret();
		return ;
	}
	this->secret = input;
}

void	Contact::addNumber() {
	std::string input;

	if (std::cin.eof())
		return ;
	std::cout << "Telephone number: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		this->addNumber();
		return ;
	}
	this->number = input;
}

std::string	Contact::getFirstName() {
	return (this->first_name);
}

std::string	Contact::getSurname() {
	return (this->surname);
}

std::string	Contact::getNickname() {
	return (this->nickname);
}

std::string	Contact::getSecret() {
	return (this->secret);
}

std::string Contact::getNumber() {
	return (this->number);
}
