#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{

private:

    std::string  type;

public:

    const std::string &getType() { return (type ); }
    void setType( std::string  value ) { type = value; }

    Weapon(std::string value);
    ~Weapon();
    
};

#endif