/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:37:11 by drabarza          #+#    #+#             */
/*   Updated: 2025/01/24 18:26:20 by drabarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	_index = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::help() const
{
	std::cout << "╔═══════════════════════════════════════════════════════════════╗" << std::endl;
	std::cout << "║                                                               ║" << std::endl;
	std::cout << "║                  Welcome to the Phonebook app                 ║" << std::endl;
	std::cout << "║                                                               ║" << std::endl;
	std::cout << "║                         Commands lists                        ║" << std::endl;
	std::cout << "║                1. ADD : register a new contact                ║" << std::endl;
	std::cout << "║           2. SEARCH : displays the requested contact          ║" << std::endl;
	std::cout << "║ 3. EXIT : The program exits and the contacts are lost forever ║" << std::endl;
	std::cout << "║                                                               ║" << std::endl;
	std::cout << "╚═══════════════════════════════════════════════════════════════╝" << std::endl;
}
void Phonebook::add()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Enter your first name ";
	std::getline(std::cin, first_name);
	if (first_name.empty() || std::cin.eof())
	{
		std::cout << std::endl << "Error: First name cannot be empty" << std::endl;
		return ;
	}
	std::cout << std::endl << "Enter your last name ";
	std::getline(std::cin, last_name);
	if (last_name.empty() || std::cin.eof())
	{
		std::cout << std::endl << "Error: Last name cannot be empty" << std::endl;
		return ;
	}
	std::cout << std::endl << "Enter your nickname ";
	std::getline(std::cin, nickname);
	if (nickname.empty() || std::cin.eof())
	{
		std::cout << std::endl << "Error: Nickname cannot be empty" << std::endl;
		return ;
	}
	std::cout << std::endl << "Enter your phone number ";
	std::getline(std::cin, phone_number);
	if (phone_number.empty() || std::cin.eof())
	{
		std::cout << std::endl << "Error: Phone number cannot be empty" << std::endl;
		return ;
	}
	for(int i = 0; phone_number[i]; i++)
	{
		if (!isdigit(phone_number[i]))
		{
			std::cout << std::endl << "Error: Phone number cannot contain non-digit characters." << std::endl;
			return ;
		}
	}
	std::cout << std::endl << "Enter your darkest secret ";
	std::getline(std::cin, darkest_secret);
	if (darkest_secret.empty() || std::cin.eof())
	{
		std::cout << std::endl << "Error: Darkest secret cannot be empty" << std::endl;
		return ;
	}
	contact[_index].set_first_name(first_name); 
	contact[_index].set_last_name(last_name);
	contact[_index].set_nickname(nickname);
	contact[_index].set_phone_number(phone_number);
	contact[_index].set_darkest_secret(darkest_secret);
	_index++;
	if (_index == 8)
		_index = 0;
}

void	Phonebook::print_contact() const
{
	std::string	index_str;
	int			index_int;

	std::cout << "Enter the index of an existing contact ";
	std::getline(std::cin, index_str);
	if (index_str.length() != 1 || !isdigit(index_str[0]))
	{
		std::cout << std::endl << "Invalid index !" << std::endl;
		return ;
	}
	index_int = atoi(index_str.c_str()) - 1;
	if (index_int < 0 || index_int > 7)
	{
		std::cout << "Invalid index !" << std::endl;
		return ;
	}
	if (contact[index_int].get_first_name().empty())
	{
		std::cout << "Line empty !" << std::endl;
		return ;
	}
	std::cout << "First name: " << contact[index_int].get_first_name() << std::endl;
	std::cout << "Last name: " << contact[index_int].get_last_name() << std::endl;
	std::cout << "Nickname: " << contact[index_int].get_nickname() << std::endl;
	std::cout << "Phone number: " << contact[index_int].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contact[index_int].get_darkest_secret() << std::endl;
}

void	Phonebook::print_contacts_header() const
{
	std::cout << "╔═════════════════════════════════════════╗" << std::endl;
	std::cout << "║                                         ║" << std::endl;
	std::cout << "║                 Contacts                ║" << std::endl;
	std::cout << "║                                         ║" << std::endl;
	std::cout << "╚═════════════════════════════════════════╝" << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "\n";
	std::cout << std::string(44, '-') << "\n";
}

void	Phonebook::print_contacts() const
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << print_column(contact[i].get_first_name()) << "|";
		std::cout << std::setw(10) << print_column(contact[i].get_last_name()) << "|";
		std::cout << std::setw(10) << print_column(contact[i].get_nickname()) << std::endl;
	}
}

const std::string	Phonebook::print_column(const std::string& str) const
{
	if (str.length() > 9)
		return str.substr(0, 9) + '.';
	return std::string(10 - str.length(), ' ') + str;
}
