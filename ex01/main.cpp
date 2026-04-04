/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:26:33 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/04 19:06:59 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int		i;
	int		count;
	Zombie	*array;

	count = 15;
	array = zombieHorde( count, "ZZzz");
	i = 0;
	while (i < count)
	{
		std::cout<< array[i].getId()<< std::endl;
		i ++;
	}

	delete [] array;
	
	return (0);
}