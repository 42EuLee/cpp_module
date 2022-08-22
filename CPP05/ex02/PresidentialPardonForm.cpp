#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential Pardon Form", 25, 5)
{
	// cout << "PresidentialPardonForm Default constructor called" << endl;
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old_obj):
Form("Presidential Pardon Form", old_obj.getSignGrade(), old_obj.getExecGrade()), _target(old_obj.getTarget())
{
	// cout << "PresidentialPardonForm copy constructor called" << endl;
	this->_signed = old_obj.getSign();
}

PresidentialPardonForm::PresidentialPardonForm(string target): Form("Presidential Pardon Form", 25, 5), _target(target)
{
	this->_signed = false;
	// cout << "PresidentialPardonForm name constructor called" << endl;
	// this->_sign_grade = 25;
	// this->_exec_grade = 5;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	try
	{
		if (this->_signed == true && this->_exec_grade > executor.getGrade())
			cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << endl;

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
		if (this->_signed == false && this->_sign_grade > name.getGrade())
		{
			name.signForm(*this);
		}
		else if (this->_signed == true)
		{
			name.signForm(*this);
			throw FormAlreadySigned();
		}
		else if (this->_sign_grade < name.getGrade())
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

bool PresidentialPardonForm::getSign() const
{
	return (this->_signed);
}

string PresidentialPardonForm::getName() const
{
	return (this->_name);
}

string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}


int PresidentialPardonForm::getSignGrade() const
{
	return (this->_sign_grade);
}

void	PresidentialPardonForm::setSigned(bool value)
{
	this->_signed = value;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ref)
{
  if (this != &ref) 
	*this = ref;
  return (*this);
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &rhs)
{
    out << "Form name: "  << rhs.getName() << endl 
	<< "Sign Grade: " << rhs.getSignGrade() << endl 
	<< "Exec Grade: " << rhs.getExecGrade() << endl
	<< "Target: " << rhs.getTarget() << endl
	<< "Signed status: " << rhs.getSign() << endl;
    return (out);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// cout << "Form Destructor called" << endl;
}