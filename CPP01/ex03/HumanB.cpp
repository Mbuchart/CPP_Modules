#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	m_name = name;
	this->m_weapon = NULL;
}

void	HumanB::setWeapon( Weapon& weap )
{
	this->m_weapon = &weap;
}

void	HumanB::attack( void ) const
{
	if (this->m_weapon != NULL)
	{
		std::cout << m_name << " attacks with his ";
		std::cout << this->m_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << m_name << " attacks without weapon" << std::endl;
	}
}