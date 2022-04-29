#include "../includes/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	_hp = 100; 
	_ad = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called for " << name << std::endl;
	_name = name;
	_hp = 100; 
	_ad = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	_name = other.get_name();
	_hp = other.get_hp();
	_mana = other.get_mana();
	_ad = other.get_ad();
    return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout <<	"Hey I'm " << _name << \
					", give me a high five!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << get_name() << std::endl;
}