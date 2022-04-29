#include "../includes/Contact.hpp"

void    Contact::add_data(std::string *data, std::string name)
{
	std::cout << "  Enter " << name << ": ";
	std::getline(std::cin, *data);
	while (data->empty())
	{
		std::cout << "This field cannot be empty." << std::endl;
		std::cout << "  Enter " << name << ": ";
		std::getline(std::cin, *data);
	}
}

void    Contact::ask_data()
{
	add_data(&m_fname, "first name");
	add_data(&m_lname, "last name");
	add_data(&m_nickname, "nickname");
	add_data(&m_phone_num, "phone number");
	add_data(&m_dsecret, "darckest secret");
}

std::string Contact::get_fname() const { return m_fname; }
std::string Contact::get_lname() const { return m_lname; }
std::string Contact::get_nickname() const { return m_nickname; }
std::string Contact::get_phone_num() const { return m_phone_num; }
std::string Contact::get_dsecret() const { return m_dsecret; }

void    print_data(std::string str)
{
    size_t i(10);

    std::cout << '|';
    while (i > str.size())
    {
        std::cout << ' ';
        i--;
    }
    i = 0;
    while (str[i] && i < 9)
    {
        std::cout << str[i];
        i++;
    }
    if (str[i] && str[i + 1])
        std::cout << '.';
    else
        std::cout << str[i];
}

void    Contact::print_contact() const
{
    print_data(m_fname);
    print_data(m_lname);
    print_data(m_nickname);
    std::cout << "|" << std::endl;
}