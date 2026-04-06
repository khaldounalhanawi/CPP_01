/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 19:00:43 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/04/06 19:00:44 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	print_return(std::string message, int errorNr)
{
	std::cout<< message<< std::endl;
	return (errorNr);
}

void	replace(std::string &str,
			const std::string &s1, const std::string &s2)
{
	size_t			pos;
	const size_t	len_s1 = s1.size ();
	const size_t	len_s2 = s2.size ();

	if (s1.empty() || s1 == s2)
		return ;

	pos = 0;
	while ((pos = str.find(s1, pos)) != std::string::npos)
	{
		str.erase (pos, len_s1);
		str.insert (pos, s2);
		pos += len_s2;
	}
	return ;
}

int	main(int argc, char **argv)
{
	std::string		fileName;
	std::string		buffer;
	std::ifstream	inFile;
	std::ofstream	outFile;
	bool			firstLine;
	
	if (argc != 4)
		return (print_return ("Program needs three arguments.", 1));

	fileName = argv[1];

	inFile.open (fileName);
	if (!inFile)
		return (print_return ("Can't open file.", 1));
	outFile.open (fileName + ".replace");

	if (!outFile)
		return (print_return ("Couldn't create new file.", 1));

	firstLine = true;
	while (std::getline (inFile, buffer))
	{
		replace(buffer, argv[2], argv[3]);
		if (!firstLine)
			outFile<< "\n";
		outFile<< buffer;
		firstLine = false;
	}
	inFile.close ();
	outFile.close ();
	return (0);
}
