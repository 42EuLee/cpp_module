#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request Form", 72, 45)
{
	cout << "RobotomyRequestForm Default constructor called" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old_obj): Form("Robotomy Request Form", old_obj.getSignGrade(), old_obj.getExecGrade()), _target(old_obj.getTarget())
{
	// cout << "RobotomyRequestForm copy constructor called" << endl;
	this->_signed = old_obj.getSign();
}

RobotomyRequestForm::RobotomyRequestForm(string target): Form("Robotomy Request Form", 72, 45), _target(target)
{
	// cout << "RobotomyRequestForm name constructor called" << endl;
	this->_signed = false;
	// this->_name = form;
	// this->_sign_grade = 72;
	// this->_exec_grade = 45;
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
		if (this->_signed == true && this->_exec_grade > executor.getGrade())
		{

			cout << "*Retarded drilling noises, RIP eardrums*" << endl;
			if (rand() % 2 == 0)
				cout << GRN << _target << " has been rotomized with 50% success rate" << RESET << endl << endl;
			else
				cout << RED << "Robotomy failed, " << _target << " lost brain cells" << RESET << endl << endl;
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

bool RobotomyRequestForm::getSign() const
{
	return (this->_signed);
}

string RobotomyRequestForm::getName() const
{
	return (this->_name);
}

string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

int RobotomyRequestForm::getSignGrade() const
{
	return (this->_sign_grade);
}

void	RobotomyRequestForm::setSigned(bool value)
{
	this->_signed = value;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
  if (this != &ref) 
	*this = ref;
  return (*this);
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &rhs)
{
    out << "Form name: "  << rhs.getName() << endl 
	<< "Sign Grade: " << rhs.getSignGrade() << endl 
	<< "Exec Grade: " << rhs.getExecGrade() << endl
	<< "Target: " << rhs.getTarget() << endl
	<< "Signed status: " << rhs.getSign() << endl;
    return (out);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// cout << "Form Destructor called" << endl;
}