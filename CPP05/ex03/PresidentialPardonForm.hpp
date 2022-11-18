#ifndef PRESIDENTIALPARDONFROM_HPP
# define PRESIDENTIALPARDONFROM_HPP

# include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
using std::exception;

class Bureaucrat ;

class PresidentialPardonForm : public Form
{
	private:
		const string	_target;

	public:
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &old_obj);
		PresidentialPardonForm(string form);
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
		PresidentialPardonForm 	&operator=(const PresidentialPardonForm &ref);
};

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &rhs);
#endif