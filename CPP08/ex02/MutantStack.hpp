#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <algorithm>

using std::cout;
using std::endl;

template <typename T, class container=std::deque<T> >
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack(){}
        ~MutantStack(){}
		MutantStack(const MutantStack &stack)
        {
            *this = stack;
        }
		MutantStack	&operator=(const MutantStack &ref)
        {
            // It legit does nothing
            (void)ref;
        }

        typedef typename container::iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }

};

#endif