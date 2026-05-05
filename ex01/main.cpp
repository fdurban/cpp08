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
		std::cout<<"Expected exception: "<<e.what()<<std::endl;
	}
	srand(time(0));
	Span largeSpan = Span(10000);
	for(int i = 0; i < 10000; i++)
	{
		largeSpan.addNumber(rand() % 10000);
	}
	std::cout<<"shortest: "<<largeSpan.shortestSpan()<<std::endl;
	std::cout<<"largest: "<<largeSpan.longestSpan()<<std::endl;
	std::vector<int> numbers;
	for(int i = 0; i < 5000; i++)
	{
		numbers.push_back(rand());
	}
	Span spRange(10000);
	spRange.addNumbers(numbers.begin(), numbers.end());
	std::cout<<"shortestspRange: "<<spRange.shortestSpan()<<"\n";
	std::cout<<"longestspRange: "<<spRange.longestSpan()<<"\n";
	return 0;
}
