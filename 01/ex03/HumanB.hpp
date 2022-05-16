#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{

private:

    std::string  name;
    Weapon *type;

public:

    void attack();

    void setWeapon(Weapon  &weapon) { type = &weapon; }

    HumanB(std::string name);
    ~HumanB(); 
};

#endif