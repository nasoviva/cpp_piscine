#include "HumanA.hpp"

HumanA::HumanA(std::string value, Weapon &weapon): name(value), type(weapon) {}
	
HumanA::~HumanA()
{
    return;
}

void HumanA::attack( void )
{
    std::cout << this->name << " attacks with their " << type.getType() << std::endl;
}
