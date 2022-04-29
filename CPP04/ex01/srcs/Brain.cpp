#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain '=' operator constructor called." << std::endl;
	
	for (int i = 0; i < 100; ++i)
	{
		this->setIdeas(i, other.getIdeas(i));
	}
	return (*this);
}

bool Brain::checkIndex(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cout << "this index of " << index << "is out of range." << std::endl;
		return false;
	}
	return true;
}

const std::string& Brain::getIdeas(int index) const
{
	if (checkIndex(index))
		return ideas[index];
	return ideas[0];
}

void Brain::setIdeas(int index, const std::string& str)
{
	if (checkIndex(index))
		ideas[index] = str;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}