#include "../includes/Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called." << std::endl;

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

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called." << std::endl;
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

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog '=' operator constructor called." << std::endl;
	type = other.getType();
	*brain = *(other.brain);
	return (*this);
}

std::string	Dog::getType() const
{
	return (type);
}

void	Dog::makeSound() const
{
	std::cout << "Woooooof woooof..." << std::endl;
}

const std::string&	Dog::getBrainIdeas(int index) const
{
	return brain->getIdeas(index);
}

void	Dog::setBrainIdeas(int index, const std::string& str) const
{
	brain->setIdeas(index, str);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called." << std::endl;
}

