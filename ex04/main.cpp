#include <iostream>
#include <fstream>

int	print_return(std::string message, int errorNr)
{
	std::cout<< message<< std::endl;
	return (errorNr);
}

void	replace(std::string &str, std::string s1, std::string s2)
{
	size_t	pos;
	int		len_s1;

	len_s1 = s1.size();
	pos = str.rfind(s1);
	while (pos != std::string::npos)
	{
		str.erase (pos, len_s1);
		str.insert (pos, s2);
		pos = str.rfind(s1);
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
