#include "Zombie.hpp"

Zombie::Zombie(std::string value)
{
    name = value;
    std::cout << name << " called" << std::endl;
    return;
}
	
Zombie::~Zombie()
{
    std::cout << name << " died" << std::endl;
    return;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
