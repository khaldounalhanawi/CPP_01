/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:26:49 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/04 13:17:48 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name):
_name(name)
{
	return;
}

Zombie::~Zombie()
{
	std::cout<< this->_name
			 << " has died"
			 << std::endl;
	return;
}

void	Zombie::announce()
{
	std::cout<< this->_name
			 << ": BraiiiiiiinnnzzzZ..."
			 << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	return;
}

