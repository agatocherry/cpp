#include <iostream>
#include <string>

int		check_alpha_min(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

void	print_maj(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (check_alpha_min(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	std::cout << str << '\0';
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		print_maj(argv[i]);
		i++;
	}
	std::cout << "\n" << '\0';
	return (0);
}