#include "Brain.hpp"

Brain::Brain()
{
	cout << YLW << "Brain default constructor called" <<  RESET <<endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Brain idea " + std::to_string(i);
}

Brain::~Brain()
{
	cout << RED <<"Brain destructor called" << RESET << endl;
}

Brain::Brain(const Brain &old_obj)
{
	cout << VLT <<"Brain copy constructor called" << RESET <<endl;
	// *this = old_obj;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = old_obj._ideas[i];
	return ;
}
		
Brain &Brain::operator=(const Brain &ref)
{
	// cout << "Brain copy assignment operator" << endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref._ideas[i];
	return (*this);
}

void	Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		cout << this->_ideas[i] << endl;
}
