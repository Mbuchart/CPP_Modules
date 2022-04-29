#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public :
		void    print_contact() const;
		void    add_data(std::string *data, std::string name);
		void    ask_data();
		std::string	get_fname() const;
		std::string	get_lname() const;
		std::string	get_nickname() const;
		std::string	get_phone_num() const;
		std::string	get_dsecret() const;
	private:
		std::string	m_fname;
		std::string	m_lname;
		std::string m_nickname;
		std::string	m_phone_num;
		std::string	m_dsecret;
};

#endif