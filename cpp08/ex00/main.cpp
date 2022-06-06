#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	std::cout << "Test for vector int :\n";
	std::vector<int> vector;
	for (int i = 0; i < 10; i++)
		vector.push_back(i);
	easyfind(vector, 5);
	easyfind(vector, 15);

	std::cout << "\nTest for list int :\n";
	std::list<int> list;
	for (int i = 0; i < 10; i++)
		list.push_back(i);
	easyfind(list, 5);
	easyfind(list, 15);
	return 0;
}