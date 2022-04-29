#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#define NL std::cout << std::endl;

#include <iostream>
#include <string>

class ClapTrap
{
	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

		std::string get_name(void) const;
		unsigned int get_hp(void) const;
		unsigned int get_mana(void) const;
		unsigned int get_ad(void) const;

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:

		std::string		_name;
		unsigned int	_hp;
		unsigned int	_mana;
		unsigned int	_ad;
};

#endif
