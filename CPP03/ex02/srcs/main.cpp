#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
	FragTrap	bob("bob");

	NL

	std::cout << "bob Hit points = " << bob.get_hp() << std::endl;
	std::cout << "bob Energy points = " << bob.get_mana() << std::endl;
	std::cout << "bob Attack damages = " << bob.get_ad() << std::endl;
	bob.takeDamage(30);

	NL

	ClapTrap	luc(bob);
	bob.attack("luc");
	luc.takeDamage(30);

	NL

	FragTrap	jack;
	jack = bob;
	jack.takeDamage(30);

	NL

	FragTrap jeff("jeff");
	jeff.attack("bob");
	jeff.takeDamage(40);
	bob.beRepaired(90);
	bob.highFivesGuys();

	NL

	std::cout << "bob Hit points = " << bob.get_hp() << std::endl;
	std::cout << "bob Energy points = " << bob.get_mana() << std::endl;
	std::cout << "bob Attack damages = " << bob.get_ad() << std::endl;

	NL

	return (0);	
}
