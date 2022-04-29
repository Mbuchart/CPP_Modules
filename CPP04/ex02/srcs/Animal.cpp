#include "../includes/Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	(void)other;
	std::cout << "Animal '=' operator constructor called." << std::endl;
	return (*this);
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "[random annimal sound...]" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

