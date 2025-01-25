/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:40:10 by drabarza          #+#    #+#             */
/*   Updated: 2025/01/24 17:55:54 by drabarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_phone_number = "";
	_darkest_secret = "";
}

Contact::~Contact()
{
}

const std::string&	Contact::get_first_name() const
{
	return _first_name;
}

const std::string&	Contact::get_last_name() const
{
	return _last_name;
}

const std::string&	Contact::get_nickname() const
{
	return _nickname;
}

const std::string& Contact::get_phone_number() const
{
	return _phone_number;
}

const std::string&	Contact::get_darkest_secret() const
{
	return _darkest_secret;
}

void	Contact::set_first_name(const std::string& new_first_name)
{
	_first_name = new_first_name;
}

void	Contact::set_last_name(const std::string& new_last_name)
{
	_last_name = new_last_name;
}

void	Contact::set_nickname(const std::string& new_nickname)
{
	_nickname = new_nickname;
}

void	Contact::set_phone_number(const std::string& new_phone_number)
{
	_phone_number = new_phone_number;
}

void	Contact::set_darkest_secret(const std::string& new_darkest_secret)
{
	_darkest_secret = new_darkest_secret;
}
