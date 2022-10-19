#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

using std::string;
using std::cout;
using std::endl;

class Base;

class C : public Base
{
	public:
		C();
		virtual ~C();

};

#endif