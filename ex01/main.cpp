/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:40:00 by drabarza          #+#    #+#             */
/*   Updated: 2025/01/25 17:39:53 by drabarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main ()
{
	PhoneBook	phonebook;
	std::string	command;

	phonebook.help();
	while (!std::cin.eof())
	{
		std::cout << "Enter your command : ";
		if (!std::getline(std::cin, command))
		{
			std::cout << std::endl;
			break;
		}
		if (command == "EXIT")
			break ;
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
		{
			phonebook.print_contacts_header();
			phonebook.print_contacts();
			phonebook.print_contact();
		}
		else
			std::cout << "Error : invalid command, try ADD SEARCH EXIT" << std::endl;
	}
	return 0;
}
