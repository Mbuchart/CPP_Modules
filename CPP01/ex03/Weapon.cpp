#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
	type = newType;
}

std::string	const &Weapon::getType()
{
	std::string const &ref = type;
	return (ref);
}

void	Weapon::setType( std::string newType )
{
	type = newType;
}