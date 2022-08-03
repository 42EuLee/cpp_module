#include "Form.hpp"

Form::Form()
{
	cout << "Form Default constructor called" << endl;
}

Form::Form(const Form &old_obj)
{
	cout << "Form copy constructor called" << endl;
	*this = old_obj;
}

Form::Form(string form)
{
	cout << "Form name constructor called" << endl;
	this->_signed = false;
	this->_name = form;
	this->_signed_grade = 0;
	this->_exec_grade = 0;
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("<Grade is too high>");
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("<Grade is too low>");
}

const char	*Form::FormAlreadySigned::what(void) const throw()
{
	return ("<Form is already signed>");
}

const char	*Form::NotExecuted::what(void) const throw()
{
	return ("<Couldn't Execute>");
}

void Form::beSigned(Bureaucrat &name)
{
	try
	{
		if (this->_signed == false && this->_signed_grade > name.getGrade())
		{
			name.signForm(*this);
		}
		else if (this->_signed == true)
		{
			name.signForm(*this);
			throw FormAlreadySigned();
		}
		else if (this->_signed_grade < name.getGrade())
		{
			name.signForm(*this);
			throw GradeTooLowException();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
}

bool Form::getSigned() const
{
	return (this->_signed);
}

string Form::getName() const
{
	return (this->_name);
}

int Form::getSignedGrade() const
{
	return (this->_signed_grade);
}

int Form::getExec() const
{
	return (this->_exec_grade);
}

void	Form::setSigned(bool value)
{
	this->_signed = value;
}

Form::~Form()
{
	cout << "Form Destructor called" << endl;
}