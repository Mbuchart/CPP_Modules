#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        void    announce( void );
        void    setName( std::string name , int i );
        Zombie*	zombieHorde( int N, std::string name );
        Zombie( void );
        ~Zombie();
    private:
        std::string name;
};

#endif