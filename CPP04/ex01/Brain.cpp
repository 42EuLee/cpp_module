#include "Brain.hpp"

Brain::Brain()
{
	cout << "Brain default constructor" << endl;
}

Brain::~Brain()
{
	cout << "Brain default destructor" << endl;
}

Brain::Brain(const Brain &old_obj)
{
	cout << "Brain copy constructor called" << endl;
	*this = old_obj;
}