#include <vector.h>




class Span
{
	private:
		unsigned int N;
		std::vector<int> num;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other)
		void	addNumber(int number);
		class myException: public std::exception
		{
			public:
				const char* what() const throw();
		}
		unsigned int shortestSpan() const ;
		unsigned int longestSpan() const ;
}
