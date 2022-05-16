#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{

private:

    std::string  name;

public:

    void announce( void );

    void SetName( std::string  value ) { name = value; }

    Zombie();
    ~Zombie();
    
};

Zombie* zombieHorde( int N, std::string name );

#endif