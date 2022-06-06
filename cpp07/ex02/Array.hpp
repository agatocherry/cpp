#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
	public :
		Array()
		: _array(NULL), _size(0)
		{};
		Array(unsigned int n)
		: _size(n)
		{
			_array = new T[n];
		}
		Array(Array const & src)
		{
			*this = src;
		}
		~Array()
		{
			if (this->_size != 0 && _array == NULL)
				delete [] this->_array;
		}
		Array & operator=(Array const & src)
		{
			if (this->_size != 0 && _array == NULL)
				delete [] this->_array;
			this->_array = new T[src._size];
			for (int i = 0; i < src._size;i++)
				this->_array[i] = src._array[i];
			this->_size = src._size;
			return *this;
		}
		T & operator[](int index) const
		{
			if (index >= this->_size)
				throw Array::limitsException();
			return this->_array[index];
		}
		class limitsException : public std::exception
		{
			virtual char const* what() const throw()
			{
				return "Errror : out of limits.";
			}
		};
	private :
		T * _array;
		int _size;
};

#endif