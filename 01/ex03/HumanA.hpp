#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{

private:

    std::string  name;
    Weapon &type;

public:

    void attack();

    HumanA(std::string value, Weapon &weapon);
    ~HumanA();
};

#endif