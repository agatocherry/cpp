#include "main.h"

int isNumber(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

std::string setType(std::string str)
{
	std::string type = "";
	int i = 0;
	
	while (str[i])
	{
		if (str[i] == '.')
		{
			type = "double";
		}
		if (str[i] >= '!' && str[i] <= '~' && isNumber(str) == 0)
		{
			type = "char";
		}
		i++;
	}
	if (str[i - 1] == 'f' && i != 1)
	{
		type = "float";
	}
	if (type == "")
		type = "int";
	if (str == "-inf" || str == "inf" || str == "+inf" || str == "nan")
	{
		type = "nan";
	}
	if (str == "-inff" || str == "inff" || str == "+inff" || str == "nanf")
	{
		type = "nanf";
	}
	return (type);
}