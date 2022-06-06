#include <iostream>
#include <cstdlib>

struct Data
{
	int n;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data *data;
	data->n = 42;
	uintptr_t retSeria = serialize(data);
	Data *newData;
	newData = deserialize(retSeria);
	std::cout << data->n << std::endl;
	std::cout << sizeof(data) << std::endl;
	std::cout << newData->n << std::endl;
	std::cout << sizeof(newData) << std::endl;
	return (0);
}