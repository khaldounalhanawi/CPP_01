#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl	guy;

	std::cout<< "DEBUG:" << std::endl;
	guy.complain ("debug");

	std::cout<< "WARNING:" << std::endl;
	guy.complain ("warning");

	std::cout<< "INFO:" << std::endl;
	guy.complain ("info");

	std::cout<< "ERROR:" << std::endl;
	guy.complain ("error");

	return (0);
}