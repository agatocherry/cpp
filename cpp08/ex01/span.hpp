#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

class maxSize : public std::exception
{
	public :
		virtual const char* what() const throw()
		{
			return "Storage maximum.";
		}
};

class cantFind : public std::exception
{
	public :
		virtual const char* what() const throw()
		{
			return "Can't find the shortest or the longest span.";
		}
};

class Span
{
	private :
		std::vector<int> _list;
		int _n;
	public :
		Span(unsigned int N);
		void addNumber(int number);
		void fillNumber(int number);
		int shortestSpan();
		int longestSpan();
		void print();
};

#endif