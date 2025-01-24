/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:40:00 by drabarza          #+#    #+#             */
/*   Updated: 2025/01/24 16:39:28 by drabarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main ()
{
	Phonebook test;
	std::string command;

	test.help();
	std::cout << "Enter your command : ";
	while (std::getline(std::cin, command) && command != "EXIT")
	{
		if (command == "ADD")
			test.add();
		else if (command == "SEARCH")
		{
			test.print_contacts_header();
			test.print_contacts();
			test.print_contact();
		}
		else
			std::cout << "Error : invalid command, try ADD SEARCH EXIT" << std::endl;
		std::cout << "Enter your command : ";
	}
	if (command.empty())
		std::cout << std::endl;
	return 0;
}
