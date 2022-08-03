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
	private:
		string	_name;
		bool	_signed;
		int		_signed_grade;

	public:
		Form();
		~Form();
		Form(const Form &old_obj);
		Form(string name, int signed_grade);
		void beSigned(Bureaucrat &name);

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
		bool	getSigned();
		string	getName();
		int		getSignedGrade();
		void	setSigned(bool value);
};

#endif