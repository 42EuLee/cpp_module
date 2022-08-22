#include "Form.hpp"

Form::Form(): _exec_grade(0), _sign_grade(0)
{
	// cout << "Form Default constructor called" << endl;
}

Form::Form(const Form &old_obj): _name(old_obj.getName()), _sign_grade(old_obj.getSignGrade()), _exec_grade(old_obj.getExecGrade())
{
	// cout << "Form copy constructor called" << endl;
	this->_signed = old_obj.getSign();
}

Form::Form(string name, int sign_grade, int exec_grade): _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	// cout << "Form name constructor called" << endl;
	// this->_name = form;
	// this->_sign_grade = 0;
	// this->_exec_grade = 0;
	this->_signed = false;
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

bool Form::getSign() const
{
	return (this->_signed);
}

string Form::getName() const
{
	return (this->_name);
}

int Form::getSignGrade() const
{
	return (this->_sign_grade);
}

int Form::getExecGrade() const
{
	return (this->_exec_grade);
}

void	Form::setSigned(bool value)
{
	this->_signed = value;
}

Form &Form::operator=(const Form &ref)
{
  if (this != &ref) 
	*this = ref;
  return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const &rhs)
{
    out << "Form name: "  << rhs.getName() << endl 
	<< "Sign Grade: " << rhs.getSignGrade() << endl 
	<< "Exec Grade: " << rhs.getExecGrade() << endl
	<< "Signed status: " << rhs.getSign() << endl;
    return (out);
}

Form::~Form()
{
	// cout << "Form Destructor called" << endl;
}