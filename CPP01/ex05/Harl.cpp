#include "Harl.hpp"

Harl::Harl( void )
{
	std::cout << "A random Harl entered the place." << std::endl;
}

Harl::~Harl( void )
{
	std::cout << "Harl probably found a problem to complain about";
	std::cout << " elsewhere and leaved..." << std::endl;
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special ketcup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn't put enough bacon in my burger! If you did,";
	std::cout << " I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming for years whereas you started";
	std::cout << " working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*f)( void );
	int			lev = -1;

	for (int i = 0; i < 4; i++)
	{
		if (type[i] == level)
			lev = i;
	}

	switch (lev)
	{
		case 0:
		{
			f = &Harl::debug;
			(this->*f)();
			break;
		}
		case 1:
		{
			f = &Harl::info;
			(this->*f)();
			break;
		}
		case 2:
		{
			f = &Harl::warning;
			(this->*f)();
			break;
		}
		case 3:
		{
			f = &Harl::error;
			(this->*f)();
			break;
		}
		default:
		{
			std::cout << "[ ununderstandable complaining... ]" << std::endl;
			break;
		}
	}
}