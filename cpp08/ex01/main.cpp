#include "span.hpp"

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.print();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--------------------------------\n";

	Span fill = Span(10000);
	fill.fillNumber(10000);
	fill.print();
	std::cout << fill.shortestSpan() << std::endl;
	std::cout << fill.longestSpan() << std::endl;
	return 0;
}