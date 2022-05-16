#include "Zombie.hpp"

int	main()
{
    int i = 0;
    const int SIZE = 5;

    Zombie* horde = zombieHorde(SIZE,"foo");
    while (i < SIZE)
    {
        horde[i].announce();
        i++;
    }   
	delete [] horde;
    return (0);
}  