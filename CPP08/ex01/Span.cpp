#ifndef SPAN_CPP
# define SPAN_CPP

#include "Span.hpp"

Span::Span()
{
	cout << "Constructor called" << endl;
}

Span::Span(unsigned int n)
{
	cout << "Default Constructor called" << endl;
	this->_maxAmount = n;
	this->_index = 0;
	// this->_vector = { this->_arr, this->_arr + n};
	this->_smolspan = INT_MAX;
}

Span::Span(const Span &ref) 
{
	*this = ref;
}

Span::~Span()
{
	cout << "Destructor called" << endl;
}

void	Span::addNumber(int num)
{
	if (this->_vector.size() < this->_maxAmount)
	{
		this->_vector.push_back(num); // for vector
		this->_index++;
	}
	else
		throw MaxAmountReached();
}

void	Span::setSmolSpan(int num)
{
	this->_smolspan = num;
}

int	Span::shortestSpan() const
{
	if (this->_vector.size() <= 1 || this->_vector.empty())
		throw MaxAmountReached();

    std::vector<int> v(this->_arr, this->_arr + this->_index);

	std::vector<int>::iterator result = std::min_element(v.begin(), v.end());
	cout << "shortest" << endl;
	return (*result);
}

int	Span::longestSpan() const
{
	if (this->_vector.size() <= 1 || this->_vector.empty())
		throw MaxAmountReached();
	// std::sort(this->_vector.begin(), this->_vector.end()); //not really a vector no more
	int end = *(this->_vector.rbegin());
	cout << "End: " << end << endl;
	int begin = *(this->_vector.begin());
	cout << "Begin: " <<begin << endl;
	cout << "longest" << endl;
	return (end - begin);
}

Span &Span::operator=(const Span &ref)
{
	this->_vector = ref._vector;
	this->_maxAmount = ref._maxAmount;
	return (*this);
}

const char	*Span::NotAbleToFindSpan::what(void) const throw()
{
	return ("<Why you shooo ugly>");
}

const char	*Span::MaxAmountReached::what(void) const throw()
{
	return ("<The contained has reached maximum capacity>");
}

// std::ostream &operator<<(std::ostream &out, Span const &rhs)
// {
// 	out << "Numbers: [";
// 	for (int i = 0; i < rhs.getIndex(); i++)
// 		out << rhs.getIndexNum(i) << " ";
// 	out << "]" << endl;
// 	return (out);
// }

#endif