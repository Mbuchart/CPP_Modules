#include "../includes/ClapTrap.hpp"

int main()
{
	ClapTrap	bob("bob");

	std::cout << "Hit points = " << bob.get_hp() << std::endl;
	std::cout << "Energy points = " << bob.get_mana() << std::endl;
	std::cout << "Attack damages = " << bob.get_ad() << std::endl;
	bob.takeDamage(3);
	bob.attack("nobody");

	NL

	ClapTrap	luc(bob);
	bob.attack("luc");
	luc.takeDamage(3);

	NL

	ClapTrap	jack;
	jack = luc;
	jack.takeDamage(3);

	NL

	ClapTrap jeff("jeff");
	jeff.attack("bob");
	jeff.takeDamage(4);
	bob.beRepaired(10);

	NL

	bob.takeDamage(20);
	bob.attack("jeff");

	NL

	std::cout << "Hit points = " << bob.get_hp() << std::endl;
	std::cout << "Energy points = " << bob.get_mana() << std::endl;
	std::cout << "Attack damages = " << bob.get_ad() << std::endl;

	NL

	return (0);	
}
