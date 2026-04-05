#include "Weapon.hpp"
#include <iostream>

int	main(void)
{
	Weapon				club;
	const std::string	&mirror = club.getType();

	std::cout<< "smiple get type:"<<club.getType()<< std::endl;
	std::cout<< "smiple get mirror:"<<mirror<< std::endl;
	club.setType ("falafel");
	std::cout<< "smiple get mirror:"<<mirror<< std::endl;
	std::cout<< "smiple get type:"<<club.getType()<< std::endl;


}