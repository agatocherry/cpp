#include "PhoneBook.hpp"

int	main()
{
	PhoneBook 	PhoneBook;
	std::string	str= "";

	while (str != "EXIT" && !std::cin.eof())
	{
		std::cout << "I wait" << std::endl;
		std::getline(std::cin, str);
		if (str == "ADD")
			PhoneBook.add();
		else if (str == "SEARCH")
			PhoneBook.search();
		else if (str != "EXIT")
			std::cout << "Please use any of the following commands: ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}