#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <unistd.h>       
# include <exception>

# include "Form.hpp"
# include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
using std::exception;

class Bureaucrat ;

class RobotomyRequestForm : public Form
{
	private:
		const string	_target;
		
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &old_obj);
		RobotomyRequestForm(string form);
		void	beSigned(Bureaucrat &name);
		void	execute(Bureaucrat const &executor);

		class	GradeTooHighException : public exception
		{
			public:
				virtual const char	*what(void) const throw();
		};

		class	GradeTooLowException : public exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
		class	FormAlreadySigned : public exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
		class	NotExecuted: public exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
		bool	getSign() const;
		string	getName() const;
		string	getTarget() const;
		int		getSignGrade() const;
		void	setSigned(bool value);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);

};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &rhs);

#endif