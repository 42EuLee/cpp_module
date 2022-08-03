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

Form *Intern::makeForm(string form, string name)
{
	int i;

	i = 0;
	string types[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	while (i < 3 && form.compare(types[i]))
		i++;
	switch(i)
	{
		case 0 :
			Form *newform = new PresidentialPardonForm();
			return ()
		case 1 :

		case 2 :
		{
			break ;
		}
		case 3 :
			cout << "No such form biatch" << endl;
	}
}
