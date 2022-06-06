#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string.h>

/*
swap: Swaps the values of two arguments. Does not return anything.

• min: Compares the two arguments and returns the smallest one. If the two argu-
ments are equal, then it returns the second one.

• max: Compares the two arguments and returns the biggest one. If the two arguments
are equal, then it returns the second one.
*/

template <typename T>
T max(const T& a, const T& b)
{
	if (a > b)
		return a;
	else
		return b;
}

template <typename T>
T min(const T& a, const T& b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
void swap(T& a, T& b)
{
	T tmp(a);

	a = b;
	b = tmp;
}

#endif