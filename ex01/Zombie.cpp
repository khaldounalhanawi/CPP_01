/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:26:49 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/04 19:27:01 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	Zombie::_nextId = 0;

Zombie::Zombie():
_name("default"),
_id(_nextId)
{
	Zombie::_nextId ++;
	return;
}

Zombie::Zombie(std::string name):
_name(name),
_id(_nextId)
{
	Zombie::_nextId ++;
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

int	Zombie::getId(void)
{
	return (this->_id);
}