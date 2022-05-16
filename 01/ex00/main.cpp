#include "Zombie.hpp"

int	main()
{
    Zombie* firstZomdie = newZombie("first");
    firstZomdie->announce();

    randomChump("second");
	delete (firstZomdie);
    return (0);
}  