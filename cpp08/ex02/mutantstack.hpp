#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		MutantStack& operator=(MutantStack const& src)
		{
			static_cast<void>(src);
			return *this;
		}
	public:
		MutantStack() :
			std::stack<T>()
		{
			return;
		}
		MutantStack(MutantStack const& src) :
			std::stack<T>(src)
		{
			return;
		}
		~MutantStack()
		{
			return;
		}
		typedef typename std::deque<T>::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};

#endif
