#include "Base.hpp"

int	main(void)
{
	Base *p;

	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}