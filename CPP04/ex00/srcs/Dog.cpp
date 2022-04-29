#include "../includes/Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	(void)other;
	std::cout << "Dog '=' operator constructor called." << std::endl;
	return (*this);
}

std::string	Dog::getType() const
{
	return (type);
}

void	Dog::makeSound() const
{
	std::cout << "Woooooff woooof..." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

