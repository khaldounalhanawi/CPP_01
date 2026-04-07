#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" <<std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout<< "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." <<std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout<< "This is unacceptable! I want to speak to the manager now." <<std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	int	key;

	std::string	levels[] = {"debug", "info", "warning", "error"};
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	key = 0;
	while (key < 4)
	{
		if (levels[key] == level)
		{
			(this->*functions[key])();
			return ;
		}
		key ++;
	}
	return ;
}