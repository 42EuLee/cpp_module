#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"
# include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
using std::exception;

class Bureaucrat ;

class ShrubberyCreationForm : public Form
{
	private:
		const string	_target;

	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &old_obj);
		ShrubberyCreationForm(string form);
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
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref);

};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &rhs);

#endif