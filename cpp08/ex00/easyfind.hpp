#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>

class notFound : public std::exception
{
	public :
		virtual const char* what() const throw()
		{
			return "Occurence not found.";
		}
};

template<typename T>
void	easyfind(T & data, int i)
{
	typename T::const_iterator iterator;
	iterator = std::find(data.begin(), data.end(), i);
	try
	{
		if (iterator == data.end())
			throw (notFound());
		std::cout << "The occurence was find : " << *iterator << ".\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

#endif