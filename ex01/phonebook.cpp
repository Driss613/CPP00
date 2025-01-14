#include "phonebook.hpp"

Phonebook::Phonebook()
{
	index = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::help()
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
	if (!first_name[0] || std::cin.eof())
	{
		std::cout << std::endl << "Error empty string" << std::endl;
		return ;
	}
	std::cout << std::endl << "Enter your last name ";
	std::getline(std::cin, last_name);
	if (!last_name[0] || std::cin.eof())
	{
		std::cout << std::endl << "Error empty string" << std::endl;
		return ;
	}
	std::cout << std::endl << "Enter your nickname ";
	std::getline(std::cin, nickname);
	if (!nickname[0] || std::cin.eof())
	{
		std::cout << std::endl << "Error empty string" << std::endl;
		return ;
	}
	std::cout << std::endl << "Enter your phone number ";
	std::getline(std::cin, phone_number);
	if (!phone_number[0] || std::cin.eof())
	{
		std::cout << std::endl << "Error empty string" << std::endl;
		return ;
	}
	std::cout << std::endl << "Enter your darkest secret ";
	std::getline(std::cin, darkest_secret);
	if (!darkest_secret[0] || std::cin.eof())
	{
		std::cout << std::endl << "Error empty string" << std::endl;
		return ;
	}
	contact[index].set_first_name(first_name);
	contact[index].set_last_name(last_name);
	contact[index].set_nickname(nickname);
	contact[index].set_phone_number(phone_number);
	contact[index].set_darkest_secret(darkest_secret);
	index++;
	if (index == 8)
		index = 0;
}

void	Phonebook::print_contact()
{
	std::string	index;
	int			index_int;

	std::cout << "Enter the index of an existing contact ";
	std::getline(std::cin, index);
	if (index.length() !=1 || !isdigit(index[0]) || atoi(index.c_str()) > 7)
	{
		std::cout << "Invalid index !" << std::endl;
		return ;
	}
	index_int = atoi(index.c_str());
	if (contact[index_int - 1].get_first_name().empty())
	{
		std::cout << "Line empty !" << std::endl;
		return ;
	}
	std::cout << "First name: " << contact[index_int - 1].get_first_name() << std::endl;
	std::cout << "Last name: " << contact[index_int - 1].get_last_name() << std::endl;
	std::cout << "Nickname: " << contact[index_int - 1].get_nickname() << std::endl;
	std::cout << "Phone number: " << contact[index_int - 1].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contact[index_int - 1].get_darkest_secret() << std::endl;
}

void	Phonebook::print_contacts_header()
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

void	Phonebook::print_contacts()
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << print_column(contact[i].get_first_name()) << "|";
		std::cout << std::setw(10) << print_column(contact[i].get_last_name()) << "|";
		std::cout << std::setw(10) << print_column(contact[i].get_nickname()) << std::endl;
	}
}

std::string	Phonebook::print_column(std::string str)
{
	if (str.length() > 9)
		return str.substr(0, 9) + '.';
	return std::string(10 - str.length(), ' ') + str;
}