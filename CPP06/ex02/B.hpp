#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

using std::string;
using std::cout;
using std::endl;

class Base;

class B : public Base
{
	public:
		B();
		virtual ~B();

};

#endif