#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weap ) : m_name(name), m_weapon(weap)
{
	return;
}

void	HumanA::attack( void ) const
{
	std::cout << m_name << " attacks with his " << this->m_weapon.getType() << std::endl;
}