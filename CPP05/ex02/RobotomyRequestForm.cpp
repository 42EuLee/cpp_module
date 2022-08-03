#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	cout << "RobotomyRequestForm Default constructor called" << endl;
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old_obj)
{
	cout << "RobotomyRequestForm copy constructor called" << endl;
	*this = old_obj;
}

RobotomyRequestForm::RobotomyRequestForm(string form)
{
	cout << "RobotomyRequestForm name constructor called" << endl;
	this->_signed = false;
	this->_name = form;
	this->_signed_grade = 72;
	this->_exec_grade = 45;
}

const char	*RobotomyRequestForm::GradeTooHighException::what(void) const throw()
{
	return ("<Grade is too high>");
}

const char	*RobotomyRequestForm::GradeTooLowException::what(void) const throw()
{
	return ("<Grade is too low>");
}

const char	*RobotomyRequestForm::FormAlreadySigned::what(void) const throw()
{
	return ("<Form is already signed>");
}

const char	*RobotomyRequestForm::NotExecuted::what(void) const throw()
{
	return ("<Couldn't Execute>");
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	try
	{
		if (this->_signed == true && this->_exec_grade > executor.getExec())
		{
			cout << "*Drilling noises due to being a retard*" << endl;
			if (rand() % 2 == 0)
				cout << executor.getName() << " Has been rotomized with 50% success rate" << endl;
			else
				cout << "Robotomy failed," << executor.getName() << " lost brain cells" << endl;
		}
		else
			throw NotExecuted();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
}

void RobotomyRequestForm::beSigned(Bureaucrat &name)
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

bool RobotomyRequestForm::getSigned()
{
	return (this->_signed);
}

string RobotomyRequestForm::getName()
{
	return (this->_name);
}

int RobotomyRequestForm::getSignedGrade()
{
	return (this->_signed_grade);
}

void	RobotomyRequestForm::setSigned(bool value)
{
	this->_signed = value;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	cout << "Form Destructor called" << endl;
}