#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	_name = "unknown";
	_hp = 100; 
	_mana = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called for " << name << std::endl;
	_name = name;
	_hp = 100; 
	_mana = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	_name = other.get_name();
	_hp = other.get_hp();
	_mana = other.get_mana();
	_ad = other.get_ad();
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." <<  std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hp <= 0 || _mana <= 0)
	{
		std::cout << _name << " cannot attack without hit points or mana." << std::endl;
		return ;
	}
	std::cout <<	"ScavTrap " << _name << \
					" attacks " << target << \
					", causing " << _ad << \
					" points of damage!" << std::endl;
	_mana--;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called for " << get_name() << std::endl;
}