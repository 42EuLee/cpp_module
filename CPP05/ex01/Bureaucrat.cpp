#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	cout << "Bureaucrat default constructor called" << endl;

}

Bureaucrat::~Bureaucrat()
{
	cout << "Bureaucrat destructor called" << endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj)
{
	cout << "Bureaucrat copy constructor called" << endl;
	*this = old_obj;
}

Bureaucrat::Bureaucrat(string name, int grade)
{
	cout << "Bureaucrat assignment constructor called" << endl;
	this->_name = name;
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
	catch(const exception &e)
	{
		std::cerr << e.what() << endl;
	}
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}

void		Bureaucrat::signForm(Form &name)
{	
	if (name.getSigned() == false && this->_grade < name.getSignedGrade())
	{
		cout << this->_name << " signed " << name.getName() << endl;
		name.setSigned(true);
	}
	else
		cout << this->_name << " couldn't sign " << name.getName() << " because ";
}


std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
    out << rhs.getName() << ", bureaucrat grade: " 
		<< rhs.getGrade() << endl;
    return (out);
}