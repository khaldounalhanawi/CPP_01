/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 11:10:59 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/05 11:17:58 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(void):
_type("undefined")
{
	return;
}

Weapon::~Weapon(void)
{
	std::cout<< "Weapon "	<< this->_type
			 << " is destroyed."
			 << std::endl;
	return;
}

const std::string&	Weapon::getType(void) const
{
	const std::string &ref = this->_type;
	return (ref);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
