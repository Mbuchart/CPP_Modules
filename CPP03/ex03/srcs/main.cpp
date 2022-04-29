#include "../includes/DiamondTrap.hpp"

int main()
{
	DiamondTrap bob;

    NL

    std::cout << "name: " << bob.getName() << std::endl;
    std::cout << "pairent name: " << bob.get_parent_name() << std::endl;
    std::cout << "hitpoints: " << bob.get_hp() << std::endl;
    std::cout << "energyPoints: " << bob.get_mana() << std::endl;
    std::cout << "attackDamage: " << bob.get_ad() << std::endl;
    bob.takeDamage(3);
    
    NL
    
    DiamondTrap jeff(bob);
    jeff.takeDamage(3);
    
    NL
    
    DiamondTrap luc;
    luc = jeff;
    jeff.takeDamage(3);

    NL

    DiamondTrap jack("jack");
    jack.attack("tag");
    jack.takeDamage(4);
    jack.beRepaired(10);
    jack.highFivesGuys();
    jack.guardGate();
    jack.whoAmI();

    NL

	return (0);	
}
