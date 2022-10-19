#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

using std::cout;
using std::endl;

template <typename T>
void add(T &derp)
{
	derp++;
}

template <typename T>
void print_array(T &derp)
{
	cout << derp << endl;
}

template <typename T>
void iter(T array[], size_t size, void (*f)(T &derp))
{
	for (size_t i = 0; i < size; ++i)
        f(array[i]);
	cout << "iter called donezo" << endl;
}

#endif