#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
using std::exception;

class Bureaucrat ;

class Form
{
	protected:
		string	_name;
		bool	_signed;
		int		_signed_grade;
		int		_exec_grade;

	public:
		Form();
		virtual ~Form();
		Form(const Form &old_obj);
		Form(string form);
		virtual void	beSigned(Bureaucrat &name) = 0 ;
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
		bool	getSigned() const;
		string	getName() const;
		int		getSignedGrade() const;
		int		getExec() const;
		void	setSigned(bool value);
};

#endif