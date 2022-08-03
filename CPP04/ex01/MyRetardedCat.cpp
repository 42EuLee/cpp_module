#include "MyRetardedCat.hpp"

MyRetardedCat::MyRetardedCat()
{
	cout << "Default MyRetardedCat Constructor called" << endl;
}

MyRetardedCat::~MyRetardedCat()
{
	cout << "MyRetardedCat Destructor called" << endl;
}

MyRetardedCat::MyRetardedCat(const MyRetardedCat &old_obj)
{
	cout << "MyRetardedCat copy constructor called" << endl;
	*this = old_obj;
}

void MyRetardedCat::makeSound() const
{
	cout << "HURR DURR, I AM DING, I SUCK COCKS uhuHUHuhuhUHuuuhh, I cleave uncleavable teams" << endl;
}