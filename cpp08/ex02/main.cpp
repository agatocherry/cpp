#include "mutantstack.hpp"

int main(void)
{
		std::cout << "Basic test :\n";
		MutantStack<int> mstack;
		mstack.push(1);
		mstack.push(2);
		std::cout << "Top : " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Top : " << mstack.top() << std::endl;
		mstack.push(3);
		mstack.push(4);
		mstack.push(5);
		mstack.push(6);
		std::cout << "Top : " << mstack.top() << std::endl;
		std::cout << "Size : " << mstack.size() << std::endl;

		std::cout << "Test with iterator :\n";
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while(it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		std::stack<int> s(mstack);
		std::cout << "Copy size : " << s.size() << std::endl;
		std::cout << "Original size : "<< mstack.size() << std::endl;
	return 0;
}
