#include "../includes/Phone_book.hpp"

Phone_book::Phone_book() : m_num_contact(0), _oldest_contact(0)
{
}

bool	Phone_book::is_full() const
{
	if (m_num_contact == 8)
		return (true);
	return (false);
}

void	Phone_book::add(Contact *ct)
{
	if (!is_full())
	{
		contact[m_num_contact] = *ct;
		m_num_contact++;
	}
	else
	{
		contact[_oldest_contact] = *ct;
		_oldest_contact++;
		if (_oldest_contact == 8)
			_oldest_contact = 0;
	}
}

void	Phone_book::print_contact() const
{
	for (int i(1); i <= m_num_contact; i++)
	{
		std::cout << '|';
		for(int j(0); j < 9; j++)
			std::cout << " ";
		std::cout << i;
		contact[i - 1].print_contact();
	}
}

void	Phone_book::get_contact(int i) const
{
	if (i < 1 || i > m_num_contact)
	{
		std::cout << "contact not found." << std::endl;
		return ;
	}
	std::cout << "contact number " << i << ":" << std::endl;
	i--;
	std::cout << "first_name     : " << contact[i].get_fname() << std::endl;
	std::cout << "last_name      : " << contact[i].get_lname() << std::endl;
	std::cout << "nickname       : " << contact[i].get_nickname() << std::endl;
	std::cout << "phone number   : " << contact[i].get_phone_num() << std::endl;
	std::cout << "darckest secret: " << contact[i].get_dsecret() << std::endl;
}

void	Phone_book::search_contact() const
{
	std::string	input;
	int			i(0);

	print_contact();
	std::cout << "Enter the contact number to get more information : ";
	std::getline(std::cin, input);
	i = input[0] - '0';
	if (input.size() > 1 || i <= 0 || i > 8 || !std::cin.good() || std::cin.eof())
		std::cout << "Cound't find that contact." << std::endl;
	else
		get_contact(i);
}

void    Phone_book::add_contact( void )
{
	Contact ct;

	if (this->is_full())
	{
		std::cout << "Phonebook is full. Replacing oldest contact with new one." << std::endl;
	}
	std::cout << "Adding a new contact." << std::endl;
	std::cout << "Please provide the following informations:" << std::endl;
	ct.ask_data();
	this->add(&ct);
	std::cout << "contact added." << std::endl;
}