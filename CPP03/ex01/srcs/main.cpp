#include "../includes/ScavTrap.hpp"

int main()
{
	ScavTrap	bob("bob");

	NL

	std::cout << "Hit points = " << bob.get_hp() << std::endl;
	std::cout << "Energy points = " << bob.get_mana() << std::endl;
	std::cout << "Attack damages = " << bob.get_ad() << std::endl;
	bob.takeDamage(30);

	NL

	ScavTrap	luc(bob);
	luc.takeDamage(30);
	bob.attack("luc");

	NL

	ScavTrap	jack;
	jack = luc;
	jack.takeDamage(30);

	NL

	ScavTrap jeff("jeff");
	jeff.attack("bob");
	jeff.takeDamage(40);
	bob.beRepaired(90);
	bob.guardGate();

	NL

	std::cout << "Hit points = " << bob.get_hp() << std::endl;
	std::cout << "Energy points = " << bob.get_mana() << std::endl;
	std::cout << "Attack damages = " << bob.get_ad() << std::endl;

	NL

	return (0);	
}
