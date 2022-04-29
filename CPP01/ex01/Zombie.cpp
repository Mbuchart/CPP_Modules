#include "Zombie.hpp"


Zombie::Zombie( void )
{
	this->name = "default name";
	std::cout << this->name << " created." << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destoyed." << std::endl;

	return;
}
void    Zombie::announce( void )
{
	std::cout << this->name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name, int i )
{
	char c;

	c = i + 48;
	if (c > 125 || c < 0)
	{
		c = 48;
		std::cout << "only 78 names exist in Zombiland." << std::endl;
	}
	this->name = name + " " + c;
	std::cout << this->name << std::endl;
}