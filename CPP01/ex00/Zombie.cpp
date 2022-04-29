#include "Zombie.hpp"

Zombie::Zombie() : name("nobody")
{}

void    Zombie::announce( void )
{
    std::cout << this->name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *z = new Zombie(name);

    return z;
}

void    Zombie::randomChump( std::string name )
{
    Zombie z(name);
    z.announce();
}

Zombie::Zombie( std::string name)
{
    this->name = name;
    std::cout << this->name << " created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " destoyed." << std::endl;

    return;
}