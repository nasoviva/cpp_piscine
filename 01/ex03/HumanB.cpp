#include "HumanB.hpp"

HumanB::HumanB(std::string value): name(value){}
	
HumanB::~HumanB()
{
    return;
}

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << type->getType() << std::endl;
}
