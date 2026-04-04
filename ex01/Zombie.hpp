/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:26:54 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/04 13:18:02 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie
{
	public:
		Zombie():_name("default"){};
		Zombie(std::string name);
		~Zombie();

		void	announce( void );
		void	setName(std::string);

	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif