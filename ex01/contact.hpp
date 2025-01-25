#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
	private :
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

	public :
		Contact(void);
		~Contact(void);
		const std::string&	get_first_name() const;
		const std::string&	get_last_name() const;
		const std::string&	get_nickname() const;
		const std::string&	get_phone_number() const;
		const std::string&	get_darkest_secret() const;
		void	set_first_name(const std::string& new_first_name);
		void	set_last_name(const std::string& new_last_name);
		void	set_nickname(const std::string& new_nickname);
		void	set_phone_number(const std::string& new_phone_number);
		void	set_darkest_secret(const std::string& new_darkest_secret);

};
#endif
