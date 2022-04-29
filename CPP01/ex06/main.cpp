#include "Harl.hpp"

int		main( int ac, char **av )
{

	if (ac != 2)
	{
		std::cout << "Usage: ./HarlFilter \"level\"" << std::endl;
		std::cout << "level = DEBUG || INFO || WARNING || ERROR" << std::endl;
	}
	else
	{
		Harl		h;
		std::string	level = av[1];

		h.complain(level);
	}

	return 0;
}