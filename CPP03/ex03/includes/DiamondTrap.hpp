#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:

		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		virtual ~DiamondTrap();

		void	whoAmI();

		const std::string& getName( void ) const;
		const std::string& get_parent_name( void ) const;

		using FragTrap::get_hp;
		using ScavTrap::get_mana;
		using FragTrap::get_ad;

		using ScavTrap::attack;
		using FragTrap::takeDamage;
		using FragTrap::beRepaired;

	private:

		std::string	_name;
		using FragTrap::_hp;
		using ScavTrap::_mana;
		using FragTrap::_ad;

};

#endif