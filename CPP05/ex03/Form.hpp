#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

# include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
using std::exception;

class Bureaucrat ;

class Form
{
	protected:
		const string	_name;
		const int		_sign_grade;
		const int		_exec_grade;
		bool			_signed;

	public:
		Form();
		virtual ~Form();
		Form(const Form &old_obj);
		Form(string form, int sign_grade, int exec_grade);
		virtual void	beSigned(Bureaucrat &name) = 0;
		virtual void	execute(Bureaucrat const &executor) = 0;

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
		int		getSignGrade() const;
		int		getExecGrade() const;
		void	setSigned(bool value);
		Form	&operator=(const Form &ref);
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif