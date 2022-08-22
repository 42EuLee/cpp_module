#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	cout << "Intern default constructor called" << endl;
}

Intern::~Intern()
{
	cout << "Intern destructor called" << endl;
}

Intern::Intern(const Intern &old_obj)
{
	cout << "Intern copy constructor called" << endl;
	*this = old_obj;
}

Form *Intern::makeForm(string form, string target)
{
	int i;
	Form *newform = NULL;

	i = 0;
	const string types[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	while (i < 3 && form.compare(types[i]))
		i++;
	switch(i)
	{
		case 0 :
			// cout << "<robotomy created>" << endl;
			newform = new RobotomyRequestForm(target);
			return (newform);
		case 1 :
			// cout << "<presidential created>" << endl;
			newform = new PresidentialPardonForm(target);
			return (newform);
		case 2 :
			// cout << "<shrubbery created>" << endl;
			newform = new ShrubberyCreationForm(target);
	}
	if (i >= 3)
		std::cout << "There's no such form";
	else
		std::cout << "Form <" << types[i] << "> has been created\n";
	return (newform);
}
