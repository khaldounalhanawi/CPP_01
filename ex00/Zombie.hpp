/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:26:54 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/03 19:26:55 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();

		void announce( void );

	private:
		std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump( std::string name );

#endif