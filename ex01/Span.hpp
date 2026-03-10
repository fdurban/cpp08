#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>
#ifndef SPAN_HPP
#define SPAN_HPP
class Span
{
	private:
		unsigned int N;
		std::vector<int> num;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		void	addNumber(int number);
		template<typename inputIt>
		void	addNumbers(inputIt begin, inputIt end);
		class myException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		unsigned int shortestSpan() const ;
		unsigned int longestSpan() const ;
};

template<typename inputIt>
void	Span::addNumbers(inputIt begin, inputIt end)
{
	if(this->N < (std::distance(begin, end) + this->num.size()))
		throw	Span::myException();
	this->num.insert(num.end(), begin, end);
}

#endif
