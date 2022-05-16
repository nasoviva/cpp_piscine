#include "Karen.hpp"

void Karen::debug(void) {
	std::cout << "I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. "; 
    std::cout << "I really do!" << std::endl;
}

void Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started ";
    std::cout << "working here since last month." << std::endl;
}

void Karen::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string value) 
{
	void (Karen::*message[4])();
    std::string level[4];

    message[0] = &Karen::debug;
    message[1] = &Karen::info;
    message[2] = &Karen::warning;
    message[3] = &Karen::error;
    level[0] = "DEBUG";
    level[1] = "INFO";
    level[2] = "WARNING";
    level[3] = "ERROR";
    
    for (int i = 0; i < 4; ++i) 
    {
		if (value == level[i])
			(this->*message[i])();
	}
}
