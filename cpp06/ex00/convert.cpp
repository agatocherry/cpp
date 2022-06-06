#include "main.h"

void convertChar(std::string str)
{
	char c = str[0];
	std::cout << "char: " << c << std::endl;
	int i = static_cast<int>(c);
	std::cout << "int: " << i << std::endl;
	float f = static_cast<float>(c);
	std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
	double d = static_cast<double>(c);
	std::cout << "double: " << std::setprecision(1) << std::fixed << d << std::endl;
}

void convertInt(std::string str)
{
	int i = stoi(str);
	char c = static_cast<char>(i);
	std::cout << "char: ";
	if (c >= '!' && c <= '~')
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	float f = static_cast<float>(i);
	std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
	double d = static_cast<double>(i);
	std::cout << "double: " << std::setprecision(1) << std::fixed << d << std::endl;
}

void convertDouble(std::string str)
{
	int d = stod(str);
	char c = static_cast<char>(d);
	std::cout << "char: ";
	if (c >= '!' && c <= '~')
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	int i = static_cast<int>(d);
	std::cout << "int: " << i << std::endl;
	float f = static_cast<float>(d);
	std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
	double n = static_cast<double>(d);
	std::cout << "double: " << std::setprecision(1) << std::fixed << n << std::endl;
}

void convertFloat(std::string str)
{
	int f = stof(str);
	char c = static_cast<char>(f);
	std::cout << "char: ";
	if (c >= '!' && c <= '~')
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	int i = static_cast<int>(f);
	std::cout << "int: " << i << std::endl;
	float n = static_cast<float>(f);
	std::cout << "float: " << std::setprecision(1) << std::fixed << n << "f" << std::endl;
	double d = static_cast<double>(f);
	std::cout << "double: " << std::setprecision(1) << std::fixed << d << std::endl;
}

void nan(std::string str)
{
	if (str  == "nan" || str == "nanf")
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
	if (str  == "-inf" || str == "-inff")
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
	if (str  == "+inf" || str == "+inff")
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
	if (str  == "inf" || str == "inff")
		std::cout << "char: impossible\nint: impossible\nfloat: inff\ndouble: inf\n";
}

void convert(char *arg)
{
	std::string str(arg);
	std::string type = setType(str);
	if (type == "nan" || type == "nanf")
		nan(str);
	if (type == "char")
		convertChar(str);
	if (type == "int")
		convertInt(str);
	if (type == "double")
		convertDouble(str);
	if (type == "float")
		convertFloat(str);
}