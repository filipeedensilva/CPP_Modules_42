/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feden-pe <feden-pe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:32:29 by feden-pe          #+#    #+#             */
/*   Updated: 2024/05/22 15:52:43 by feden-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void	Contact::addFirstName() {
	std::string input;

	std::cout << "First Name: ";
	std::getline(std::cin, input);
	this->first_name = input;
}

void	Contact::addSurname() {
	std::string input;

	std::cout << "Surname: ";
	std::getline(std::cin, input);
	this->surname = input;
}

void	Contact::addNickname() {
	std::string input;

	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	this->nickname = input;
}

void	Contact::addCity() {
	std::string input;

	std::cout << "City: ";
	std::getline(std::cin, input);
	this->city = input;
}

void	Contact::addNumber() {
	std::string input;

	std::cout << "Telephone number: ";
	std::getline(std::cin, input);
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

std::string	Contact::getCity() {
	return (this->city);
}

std::string Contact::getNumber() {
	return (this->number);
}
