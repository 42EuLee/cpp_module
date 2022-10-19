#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

using std::cout;
using std::endl;

template<class T>
class Array
{
	private:
		T	*_arr;
		unsigned int	_size;

	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array &old_obj);
		int size() const;
		T	getIndex(int i) const;

		Array<T> &operator=(const Array<T> &ref);
		T &operator[](size_t index);

		class	IndexOutOfBounds : public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
};

#endif

