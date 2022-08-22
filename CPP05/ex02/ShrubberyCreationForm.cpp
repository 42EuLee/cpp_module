#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation Form", 147, 135)
{
	// cout << "ShrubberyCreationForm Default constructor called" << endl;
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old_obj): Form("Shrubbery Creation Form", old_obj.getSignGrade(), old_obj.getExecGrade()), _target(old_obj.getTarget())
{
	// cout << "ShrubberyCreationForm copy constructor called" << endl;
	this->_signed = old_obj.getSign();
}

ShrubberyCreationForm::ShrubberyCreationForm(string target): Form("Shrubbery Creation Form", 147, 135), _target(target)
{

	// cout << "RobotomyRequestForm name constructor called" << endl;
	this->_signed = false;
	// this->_name = form;
	// this->_sign_grade = 145;
	// this->_exec_grade = 137;
}

const char	*ShrubberyCreationForm::GradeTooHighException::what(void) const throw()
{
	return ("<Grade is too high>");
}

const char	*ShrubberyCreationForm::GradeTooLowException::what(void) const throw()
{
	return ("<Grade is too low>");
}

const char	*ShrubberyCreationForm::FormAlreadySigned::what(void) const throw()
{
	return ("<Form is already signed>");
}

const char	*ShrubberyCreationForm::NotExecuted::what(void) const throw()
{
	return ("<Couldn't Execute>");
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	try
	{
		if (this->_signed == true && this->_exec_grade > executor.getGrade())
		{
			// std::ofstream	file(getTarget() + "_shrubbery");
			string	shrubbery =		"               ,@@@@@@@,\n"
									"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
									"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
									"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
									"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
									"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
									"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
									"       |o|        | |         | |\n"
									"       |.|        | |         | |\n"
									"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
			cout << shrubbery << endl;
			// file << shrubbery << endl;
			// file.close();
		}
		else
			throw NotExecuted();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
}

void ShrubberyCreationForm::beSigned(Bureaucrat &name)
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
			cout << "form already signed" << endl;
			throw FormAlreadySigned();
		}
		else if (this->_sign_grade < name.getGrade())
		{
			name.signForm(*this);
			cout << "grade too low" << endl;
			throw GradeTooLowException();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
}

bool ShrubberyCreationForm::getSign() const
{
	return (this->_signed);
}

string ShrubberyCreationForm::getName() const
{
	return (this->_name);
}

string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

int ShrubberyCreationForm::getSignGrade() const
{
	return (this->_sign_grade);
}

void	ShrubberyCreationForm::setSigned(bool value)
{
	this->_signed = value;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
  if (this != &ref) 
	*this = ref;
  return (*this);
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &rhs)
{
    out << "Form name: "  << rhs.getName() << endl 
	<< "Sign Grade: " << rhs.getSignGrade() << endl 
	<< "Exec Grade: " << rhs.getExecGrade() << endl
	<< "Target: " << rhs.getTarget() << endl
	<< "Signed status: " << rhs.getSign() << endl;
    return (out);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// cout << "Form Destructor called" << endl;
}