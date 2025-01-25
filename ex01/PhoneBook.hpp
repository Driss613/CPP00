/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:09:21 by drabarza          #+#    #+#             */
/*   Updated: 2025/01/25 17:39:40 by drabarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

class PhoneBook
{
	private :
		Contact contact[8];
		int		_index;
		const std::string	print_column(const std::string& str) const;
	public :
		PhoneBook();
		~PhoneBook();
		void				help() const;
		void				add();
		void				print_contact() const;
		void				print_contacts_header() const;
		void				print_contacts() const;
};
#endif
