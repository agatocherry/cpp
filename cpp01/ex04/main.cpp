#include <iostream>
#include <fstream>
#include <string>

int	error()
{
	std::cout << "Please write one valid file. Thanks." << std::endl;
	return (0);
}

char *newFile(std::string fileName)
{
	int	size = 0;
	while (fileName[size])
		size++;
	char *newFileName = new char[size + 9];
	std::string dot(".replace");
	int i = 0;
	while (fileName[i])
	{
		newFileName[i] = fileName[i];
		i++;
	}
	int j = 0;
	while (dot[j])
	{
		newFileName[i] = dot[j];
		i++;
		j++;
	}
	return (newFileName);
}

int size(std::string str)
{
	int j = 0;
	while (str[j])
	{
		j++;
	}
	// std::cout << j << std::endl;
	return (j);
}

int	size_replace(std::string str, int i, std::string replace)
{
	int size = 0;

	while(str[i + size] == replace[size] && str[i + size] && replace[size])
	{
		size++;
	}
	return (size);
}

int	replace(std::string s1, std::string s2, std::string fileName, char *newFileName)
{
	std::ifstream in(fileName);
	if(!in)
		return (1);
	std::string const out(newFileName);
	std::ofstream flow(out.c_str());
	std::string line;
	int s1Size = size(s1);
	while(getline(in, line) && flow)
	{
		int i = 0;
		int j = 0;
		while (line[i])
		{
			//std::cout << line[i];
			//std::cout << size_replace(line, i, s1);
			if (size_replace(line, i, s1) == size(s1))
			{
				flow << s2;
				i += (size_replace(line, i, s1) - 1);
			}
			else
				flow << line[i];
			i++;
		}
		flow << std::endl;
		//std::cout << std::endl;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	std::string s1 = "C++";
	std::string s2 = "B--";
	if (argc != 2)
	 	return (error());
	std::string fileName(argv[1]);
	char *newFileName = newFile(fileName);
	//std::cout << fileName << '\n' << newFileName << std::endl;
	if (replace(s1, s2, fileName, newFileName) == 1)
		return (error());
	delete(newFileName);
	return (0);
}
