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
		
Brain &Brain::operator=(const Brain &ref)
{
	cout << "Brain copy assignment operator" << endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref._ideas[i];
	return (*this);
}

void	Brain::getBrain() const
{
	for (int i = 0; i < 100; i++)
		cout << _ideas[i]  << endl;
}
