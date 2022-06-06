#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
	size = 0;
}

void	PhoneBook::inputInfo()
{
	std::string	str = "";

	while (str == "")
	{
		std::cout << "Name : ";
		std::getline(std::cin,str);
	}
	repertory[i].setName(str);
	str = "";
	while (str == "")
	{
		std::cout << "Last name : ";
		 std::getline(std::cin,str);
	}
	repertory[i].setLastName(str);
	str = "";
	while (str == "")
	{
		std::cout << "Nickname : ";
		std::getline(std::cin,str);
	}
	repertory[i].setNickname(str);
	str = "";
	while (str == "")
	{
		std::cout << "Phone number : ";
		std::getline(std::cin,str);
	}
	repertory[i].setPhoneNumber(str);
	str = "";
	while (str == "")
	{
		std::cout << "Darkest secret : ";
		std::getline(std::cin,str);
	}
	repertory[i].setDarkestSecret(str);
}

void	PhoneBook::add()
{
	inputInfo();
	i = ++i % 8;
	if (size < 8)
		size++;
}

std::string	get_element(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);

}

void	PhoneBook::search()
{
	int			x = 0;
	std::string	str = "";
	if (size == 0)
	{
		std::cout << "No contacts, please ADD one." << std::endl;
		return ;
	}
	while (x < size)
	{
		std::cout << std::setw(10) << x + 1 << '|';
		std::cout << std::setw(10) << get_element(repertory[x].getName()) << '|';
		std::cout << std::setw(10) << get_element(repertory[x].getLastName()) << '|';
		std::cout << std::setw(10) << get_element(repertory[x].getNickname()) << '|';
		std::cout << '\n';
		x++;
	}
	std::cout << "Put an index : ";
	std::getline(std::cin, str);
	if (str.empty())
		std::cout << "No index, please SEARCH again." << std::endl;
	else
	{
		x = std::atoi(str.c_str()) - 1;
		if (x >= 0 && x < size)
		{
			std::cout << "Name : " << repertory[x].getName() << std::endl;
			std::cout << "Last name : " << repertory[x].getLastName() << std::endl;
			std::cout << "Nickname : " << repertory[x].getNickname() << std::endl;
			std::cout << "Phone number : " << repertory[x].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret : " << repertory[x].getDarkestSecret() << std::endl;
		}
		else
			std::cout << "Invalid index, please SEARCH again." << std::endl;
	}
}