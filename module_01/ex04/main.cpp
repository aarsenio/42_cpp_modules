#include <iostream>
#include <fstream>

static void	content_replace(std::fstream &inFile, std::fstream &outFile, const std::string target, const std::string replace)
{
	size_t		i;
	std::string content;

	while (getline(inFile, content))
	{
		i = 0;
		while (1)
		{
			i = content.find(target, i);
			if (i == std::string::npos)
				break ;
			content.erase(i, target.length());
			content.insert(i, replace);
		}
		outFile << content << std::endl;
	}
}

static int	error(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

int	main(int ac, char **av)
{
	std::fstream	inFile;
	std::fstream	outFile;
	std::string		outFileName;

	if (ac != 4)
		return error("Wrong number of arguments");
	if (!av[2][0] || !av[3][0])
        return error("Strings must not be empty");
	if (!((std::string)av[2]).compare(av[3]))
        return error("The strings must not be equal");
	inFile.open(av[1], std::ios::in);
	if (!inFile.is_open())
        return error("Error opening inFile");
	outFileName = av[1];
    outFileName += ".replace";
	outFile.open(outFileName.c_str(), std::ios::out | std::ios::trunc);
	if (!outFile.is_open())
	{
        inFile.close();
        return (1);
    }
	content_replace(inFile, outFile, (const std::string)av[2], (const std::string)av[3]);
	inFile.close();
	outFile.close();
}
