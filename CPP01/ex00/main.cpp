#include "Zombie.hpp"

int main()
{
    Zombie z("bob");
    z.announce();

    Zombie *nz = z.newZombie("luc");
    nz->announce();

    z.randomChump("yve");

    delete nz;
    return (0);
}