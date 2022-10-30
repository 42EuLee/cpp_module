#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;

class Span
{
	private:

		int				*_arr;
		unsigned int	_maxAmount;
		unsigned int	_index;

	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span &ref);

		int		shortestSpan() const;
		int		longestSpan() const;
		void	addNumber(int num);
		int		getIndex() const;
		int		getIndexNum(int i) const;
		Span	&operator=(const Span &ref);

		class	MaxAmountReached : public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};

		class	TooFewArrayElements : public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};

};

int	checkSpan(int x, int y);
std::ostream &operator << (std::ostream &out, Span const &rhs);

#endif

