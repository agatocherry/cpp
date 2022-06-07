#include <iostream>
#include <fstream>
#include <string>


int	error_message(std::string str)
{
	std::cout << "Error\n" << str << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	std::ifstream	ifs(argv[1]);
	std::string		replace_file(argv[1]);
	replace_file += ".replace";
	std::ofstream	ofs(replace_file.c_str());
	std::string		file;
	if (argc != 4)
		return (error_message("Usage: ./replace [FILE] [s1] [s2]"));
	if (!ifs)
		return (error_message("The file does not exist or do not have permission"));

	std::string		str1(argv[2]);
	std::string		str2(argv[3]);

	if (str1.empty())
		return (error_message("String empty"));

	std::string		line;

	while (getline(ifs, line))
	{
		file += line;
		file += "\n";
	}

	ifs.close();

	const unsigned int	size_str1 = str1.length();
	const unsigned int	size_str2 = str2.length();

	for (unsigned int i = 0; i < (unsigned int)file.length(); i++)
	{
		if (!file.compare(i, size_str1, str1))
		{
			file.erase(i, size_str1);
			file.insert(i, str2);
			i += size_str2 - 1;
		}
	}
	ofs << file;
	ofs.close();
	return (0);
}