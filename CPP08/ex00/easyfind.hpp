#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <array>
#include <forward_list>
#include <list>

using std::cout;
using std::endl;

template <class T>
void easyFind(T &Container, int num)
{
	typename T::iterator iterate;

    iterate = find(Container.begin(), Container.end(), num);
	if (iterate != Container.end())
        cout << "Number found in container: " << *iterate << endl;
    else
        cout << "Number not found in container" << endl;
}

#endif

