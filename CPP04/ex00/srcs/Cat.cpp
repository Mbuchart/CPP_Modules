#include "../includes/Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	(void)other;
	std::cout << "Cat '=' operator constructor called." << std::endl;
	return (*this);
}

std::string	Cat::getType() const
{
	return (type);
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaaaouuu miaouu..." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

