#include "span.hpp"

Span::Span(unsigned int N)
	: _list(), _n(N)
{
}

void Span::addNumber(int number)
{
	try
	{
		if (this->_list.size() >= this->_n)
			throw (maxSize());
		this->_list.push_back(number);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Span::fillNumber(int number)
{
	try
	{
		if (this->_list.size() >= this->_n)
			throw (maxSize());
		for (int i = 0; i < number; i++)
			this->_list.push_back(i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int Span::shortestSpan()
{
	try
	{
		if (this->_list.size() == 0 || this->_list.size() == 1)
			throw(cantFind());
		int shortest = this->_list[0];
		for (int i = 0; i < this->_n; i++)
		{
			if (shortest > this->_list[i])
				shortest = this->_list[i];
		}
		return shortest;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return -1;
}

int Span::longestSpan()
{
	try
	{
		if (this->_list.size() == 0 || this->_list.size() == 1)
			throw(cantFind());
		int shortest = this->_list[0];
		for (int i = 0; i < this->_n; i++)
		{
			if (shortest < this->_list[i])
				shortest = this->_list[i];
		}
		return shortest;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return -1;
}

void Span::print()
{
	for (int i = 0; i < this->_n; i++)
		std::cout << this->_list[i] << " ";
	std::cout << std::endl;
}