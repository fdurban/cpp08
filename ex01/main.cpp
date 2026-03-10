#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(42);
	}
	catch(std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	

	Span largeSpan = Span(10000);
	for(int i = 0; i < 10000; i++)
	{
		largeSpan.addNumber(rand());
	}
	std::cout<<"shortest: "<<largeSpan.shortestSpan()<<std::endl;
	std::cout<<"largest: "<<largeSpan.longestSpan()<<std::endl;

	return 0;
}
