/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 16:16:24 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/05 16:16:26 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon):
_name(name),
_weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::setWeapon(Weapon &newWeapon)
{
	this->_weapon = newWeapon;
	return ;
}

void	HumanA::attack(void)
{
	std::cout<< this->_name
			 << " attacks with their "
			 << this->_weapon.getType()
			 << std::endl;
}