/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 16:16:31 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/05 16:16:32 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name):
_name(name),
_weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
	return ;
}

void	HumanB::attack(void)
{
	std::cout<< this->_name
			 << " attacks with their "
			 << this->_weapon->getType()
			 << std::endl;
}