/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:26:54 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/04 19:12:13 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie
{
	public:
		Zombie():_name("default"), _id(_nextId){this->_nextId ++;};
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
		void	setName(std::string);
		int		getId(void);

	private:
		std::string	_name;
		int			_id;
		static int	_nextId;
};

Zombie* zombieHorde( int N, std::string name );

#endif