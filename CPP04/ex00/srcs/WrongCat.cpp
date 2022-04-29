#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	(void)other;
	std::cout << "WrongCat '=' operator constructor called." << std::endl;
	return (*this);
}

std::string	WrongCat::getType() const
{
	return (type);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrooonnnnggg Miaaaaaouuu..." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

