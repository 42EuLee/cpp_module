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
		const string	_name;
		const int		_sign_grade;
		const int		_exec_grade;
		bool			_signed;

	public:
		Form();
		~Form();
		Form(const Form &old_obj);
		Form(string name, int sign_grade, int exec_grade);
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
		bool	getSign() const;
		string	getName() const;
		int		getExecGrade() const;
		int		getSignGrade() const;
		void	setSigned(bool value);
		Form	&operator=(const Form &ref);
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif