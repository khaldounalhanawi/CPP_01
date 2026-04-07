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
	std::cout<< "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout<< "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" <<std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout<< "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." <<std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout<< "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." <<std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	int			code;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	code = 0;
	while (code < 4)
	{
		if (levels[code] == level)
			break;
		code ++;
	}

	switch (code)
	{
		case 0:
			this->debug ();
		case 1:
			this->info ();
		case 2:
			this->warning ();
		case 3:
			this->error ();
			break;
		default:
			std::cout	<< "[ Probably complaining about"
						<< " insignificant problems ]"
						<< std::endl;
	}
	return ;
}
