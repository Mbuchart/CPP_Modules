#include "../includes/Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called." << std::endl;

	try
	{
		brain = new Brain();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		throw e;
	}
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called." << std::endl;
	try
	{
		brain = new Brain();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		throw e;
	}
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat '=' operator constructor called." << std::endl;
	type = other.getType();
	*brain = *(other.brain);
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

const std::string&	Cat::getBrainIdeas(int index) const
{
	return brain->getIdeas(index);
}

void	Cat::setBrainIdeas(int index, const std::string& str) const
{
	brain->setIdeas(index, str);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called." << std::endl;
}

