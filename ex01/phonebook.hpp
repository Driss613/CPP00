#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"
#include <iomanip>
#include <string>
#include <cstdlib>

class Phonebook
{
	private :
		Contact contact[8];
		int		_index;
	public :
		Phonebook();
		~Phonebook();
		void		help();
		void		add();
		void		print_contact();
		void		print_contacts_header();
		std::string	print_column(std::string str);
		void		print_contacts();
};
#endif
