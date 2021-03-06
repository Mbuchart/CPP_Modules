#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( std::string name );
		void	setWeapon( Weapon &weap );
		void	attack( void ) const;
	private:
		std::string	m_name;
		Weapon	*m_weapon;
};

#endif