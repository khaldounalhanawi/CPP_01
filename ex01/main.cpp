/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:26:33 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/04 13:24:08 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		i;
	int		count;
	Zombie	*array;

	count = 5;
	array = zombieHorde( count, "falafel");
	i = 0;
	while (i < count)
	{
		//array[i].announce();
		i ++;
	}

	delete [] array;
	
	return (0);
}