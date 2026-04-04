/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 19:43:57 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/04 19:43:58 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str;
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";

	std::cout<< &str << std::endl;
	std::cout<< &stringPTR << std::endl;
	std::cout<< &stringREF << std::endl;

	std::cout<< str << std::endl;
	std::cout<< *stringPTR << std::endl;
	std::cout<< stringREF << std::endl;	

	return (0);
}