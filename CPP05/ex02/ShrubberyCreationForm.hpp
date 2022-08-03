#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
using std::exception;

class Bureaucrat ;

class ShrubberyCreationForm : public Form
{
	private:

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
		bool	getSigned();
		string	getName();
		int		getSignedGrade();
		void	setSigned(bool value);
};

#endif