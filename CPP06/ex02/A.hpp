#ifndef A_HPP
# define A_HPP

#include "Base.hpp"

using std::string;
using std::cout;
using std::endl;

class Base;

class A : public Base
{
	public:
		A();
		virtual ~A();

};

#endif