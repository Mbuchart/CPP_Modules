#include "Zombie.hpp"

int main()
{
	Zombie	z;
	int		i = 0;
	int		N = 8;

	Zombie *zombies = z.zombieHorde(N, "luc");
	while (i < N)
	{
		zombies[i].announce();
		i++;
	}

	delete [] zombies;

	return (0);
}