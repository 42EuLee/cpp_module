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
	this->_arr = new int [n];
}

Span::Span(const Span &ref) 
{
	*this = ref;
}

Span::~Span()
{
	cout << "Destructor called" << endl;
	delete [] this->_arr;
}

void	Span::addNumber(int num)
{
	if (this->_index < this->_maxAmount)
	{
		this->_arr[this->_index] = num;
		this->_index++;
	}
	else
		throw MaxAmountReached();
}

void	Span::addAllNumbers()
{
	int	num;

	srand(time(0));
	while (this->_index < this->_maxAmount)
	{
		num = rand() % 10000;
		this->_arr[this->_index] = num;
		this->_index++;
	}
}

int		Span::getIndex() const
{
	return(this->_index);
}


int		Span::getIndexNum(int i) const
{
	return (this->_arr[i]);
}


int	Span::shortestSpan() const
{
	int *temp_arr;
	int	*temp_arr2;
	int	*temp_arr3;
	int	ret;

	if (this->_index < 2)
		throw TooFewArrayElements();
	temp_arr = new int [this->_index];
	temp_arr2 = new int [this->_index];
	temp_arr3 = new int [this->_index];
	std::copy (this->_arr, this->_arr + this->_index, temp_arr);
	std::sort(temp_arr, temp_arr + this->_index);
	std::rotate_copy(temp_arr, temp_arr + 1, temp_arr + this->_index, temp_arr2);
	std::transform(temp_arr, temp_arr + this->_index, temp_arr2, temp_arr3, checkSpan);
	ret = *(std::min_element(temp_arr3, temp_arr3 + this->_index));
	delete [] temp_arr;
	delete [] temp_arr2;
	delete [] temp_arr3;

	return (ret);
}

int	Span::longestSpan() const
{
	if (this->_index == 0)
		throw TooFewArrayElements();
	return (*(std::max_element(this->_arr, this->_arr + this->_index))
		 - *(std::min_element(this->_arr, this->_arr + this->_index)));
}

Span &Span::operator=(const Span &ref)
{
	this->_arr = ref._arr;
	this->_maxAmount = ref._maxAmount;
	this->_index = ref._index;
	return (*this);
}

const char	*Span::MaxAmountReached::what(void) const throw()
{
	return ("<The contained has reached maximum capacity>");
}

const char	*Span::TooFewArrayElements::what(void) const throw()
{
	return ("<Too few Elements in array to find Span. Try adding at least 2 elements>");
}

std::ostream &operator<<(std::ostream &out, Span const &rhs)
{
	out << "Numbers: [";
	for (int i = 0; i < rhs.getIndex(); i++)
		out << rhs.getIndexNum(i) << " ";
	out << "]" << endl;
	return (out);
}

int	checkSpan(int x, int y)
{
	return (abs(x - y));
}

#endif