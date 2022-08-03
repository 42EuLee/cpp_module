#include "Brain.hpp"

Brain::Brain()
{
	cout << "Brain default constructor" << endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "this is a test";
	}
	this->ideas[0] = "0";
	this->ideas[1] = "1";
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

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Assignment operator for Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

void	Brain::changeIdea(int id, string word)
{
	this->ideas[id] = word;
}

const string	&Brain::getIdea(int id) const
{
	return (this->ideas[id]);
}