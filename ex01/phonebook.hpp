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
		void				help() const;
		void				add();
		void				print_contact() const;
		void				print_contacts_header() const;
		const std::string	print_column(const std::string& str) const;
		void				print_contacts() const;
};
#endif
