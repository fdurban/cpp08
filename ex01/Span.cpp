#include "easyfind.hpp"

Span::Span()
{
	std::cout<<"Default constructor called"<<std::endl;
}

Span::Span(unsigned int N)
{
	std::cout<<"Parametrizied constructor called"<<std::endl;
}

Span::Span(const Span &other) : N(other.n), num(other.num)
{
}

void	Span::addNumber(int number)
{
	if (num.size() > N)
	{
		throw Span::myException();
	}
	num.push_back(number);
}

const	char* Span::myException::what() const throw()
{
	return ("Capacity exceeded");
}

unsigned int Span::shortestSpan() const
{
	std::vector<int> copy(this->num);
	
	copy::sort(copy.begin(), copy.end());
}
