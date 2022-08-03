#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	cout << "PresidentialPardonForm Default constructor called" << endl;
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old_obj)
{
	cout << "PresidentialPardonForm copy constructor called" << endl;
	*this = old_obj;
}

PresidentialPardonForm::PresidentialPardonForm(string form)
{

	cout << "PresidentialPardonForm name constructor called" << endl;
	this->_signed = false;
	this->_name = form;
	this->_signed_grade = 25;
	this->_exec_grade = 5;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	try
	{
		if (this->_signed == true && this->_exec_grade > executor.getExec())
			cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << endl;

		else
			throw NotExecuted();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
}

const char	*PresidentialPardonForm::GradeTooHighException::what(void) const throw()
{
	return ("<Grade is too high>");
}

const char	*PresidentialPardonForm::GradeTooLowException::what(void) const throw()
{
	return ("<Grade is too low>");
}

const char	*PresidentialPardonForm::FormAlreadySigned::what(void) const throw()
{
	return ("<Form is already signed>");
}

const char	*PresidentialPardonForm::NotExecuted::what(void) const throw()
{
	return ("<Couldn't Execute>");
}

void PresidentialPardonForm::beSigned(Bureaucrat &name)
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

bool PresidentialPardonForm::getSigned()
{
	return (this->_signed);
}

string PresidentialPardonForm::getName()
{
	return (this->_name);
}

int PresidentialPardonForm::getSignedGrade()
{
	return (this->_signed_grade);
}

void	PresidentialPardonForm::setSigned(bool value)
{
	this->_signed = value;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	cout << "Form Destructor called" << endl;
}