#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("nobody"), _hp(10), _mana(10), _ad(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called for " << name << std::endl;
	_name = name;
	_hp = 10;
	_mana = 10;
	_ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	_name = other.get_name();
	_hp = other.get_hp();
	_mana = other.get_mana();
	_ad = other.get_ad();
	return (*this);
}

std::string ClapTrap::get_name(void) const
{
    return (this->_name);
}

unsigned int ClapTrap::get_hp(void) const
{
    return (this->_hp);
}

unsigned int ClapTrap::get_mana(void) const
{
    return (this->_mana);
}

unsigned int ClapTrap::get_ad(void) const
{
    return (this->_ad);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hp <= 0 || _mana <= 0)
	{
		std::cout << _name << " cannot attack without hit points or mana." << std::endl;
		return ;
	}
	std::cout <<	"ClapTrap " << _name << \
					" attacks " << target << \
					", causing " << _ad << \
					" points of damage!" << std::endl;
	_mana--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp < amount)
		_hp = 0;
	else
		_hp -= amount;
	std::cout <<	"ClapTrap " << _name << \
					" took " << amount << \
					" damage, hit points to " << _hp << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_mana > 0 && _hp > 0)
	{
		_hp += amount;
		std::cout << _name << " repaired himself, gained " << \
					amount << " Energy points." << std::endl;
		_mana--;
	}
	else
	{
		std::cout << _name << " Doesn't have enough Energy points to repaire.";
		std::cout << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " destructor called" << std::endl;
}

