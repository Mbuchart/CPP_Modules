#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        void    announce( void );
        void    randomChump( std::string name );
        Zombie();
        Zombie* newZombie( std::string name );
        Zombie( std::string name );
        ~Zombie();
    private:
        std::string name;
};

#endif