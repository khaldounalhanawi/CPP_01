#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl		guy;
	std::string	input;

	if (argc != 2)
	{
		std::cout	<< "Program takes only 1 argument."
					<< std::endl;
		return (1);
	}
	guy.complain (argv[1]);
	return (0);
}
