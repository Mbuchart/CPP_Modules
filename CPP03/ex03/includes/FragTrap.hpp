#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	virtual ~FragTrap();

	void	highFivesGuys( void );

};

#endif