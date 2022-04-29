#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon(std::string newType);
		std::string const &getType();
		void				setType( std::string newType );
	private:
		std::string type;
};

#endif