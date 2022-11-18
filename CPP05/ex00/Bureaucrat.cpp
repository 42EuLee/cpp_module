#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	// cout << "Bureaucrat default constructor called" << endl;
}

Bureaucrat::~Bureaucrat()
{
	// cout << "Bureaucrat destructor called" << endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj): _name(old_obj.getName())
{
	// cout << "Bureaucrat copy constructor called" << endl;
	// this->_name = old_obj.getName();
	this->_grade = old_obj.getGrade();
}

Bureaucrat::Bureaucrat(string const name, int grade): _name(name)
{
	// cout << "Bureaucrat assignment constructor called" << endl;
	// this->_name = name;
	this->_grade = grade;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

const string &Bureaucrat::getName(void) const
{
	return(this->_name);
}

void	Bureaucrat::incrementGrade(void)
{
	try
	{
		if (this->_grade - 1 < 1)
			throw GradeTooHighException();
		else
			this->_grade--;
	}
	catch(exception &caught)
	{
		cout << caught.what() << endl;
	}
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
		if (this->_grade + 1 > 150)
			throw GradeTooLowException();
		else
			this->_grade++;
	}
	catch(exception &caught)
	{
		cout << caught.what() << endl;
	}
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Exception caught: Grade Too High");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Exception caught: Grade Too Low");
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref)
{
	if (this != &ref) 
		*this = ref;
  	return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
    out << rhs.getName() << " grade <" << rhs.getGrade() << ">";
    return (out); 
}