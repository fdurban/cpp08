#include "Span.hpp"

Span::Span()
{
	std::cout<<"Default constructor called"<<std::endl;
}

Span::Span(unsigned int N): N(N)
{
	std::cout<<"Parametrizied constructor called"<<std::endl;
}

Span::Span(const Span &other) : N(other.N), num(other.num)
{
}

void	Span::addNumber(int number)
{
	if (num.size() >= N)
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

	std::sort(copy.begin(), copy.end());
	std::vector<int> spans(copy.size());
	std::adjacent_difference(copy.begin(), copy.end(), spans.begin());
	std::vector<int>::iterator minSpan = std::min_element(spans.begin() + 1, spans.end());
	return (*minSpan);
}

unsigned int Span::longestSpan() const
{
	if(num.size() < 2)
		throw myException();
	std::vector<int>::const_iterator min_it = std::min_element(num.begin(), num.end());
	std::vector<int>::const_iterator max_it = std::max_element(num.begin(), num.end());

	return *max_it - *min_it;
}







