#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string.h>
template<typename T>

void print( T const & data )
{
	std::cout << data << " ";
	return;
}

template<typename T>
void iter(T *array, int size, void function(T const &array))
{
	int i = 0;
	while (i < size)
	{
		function(array[i]);
		i++;
	}
}


#endif