#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;
using std::exception;

class Bureaucrat
{
	private:
		string _name;
		int		_grade;

	public:
		Bureaucrat(string name, int grade);
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &old_obj);
		const string	&getName(void) const;
		int				getGrade(void) const;
		void			setGrade(int grade);
		void			incrementGrade(void);
		void			decrementGrade(void);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};

		
};

std::ostream &operator << (std::ostream &out, Bureaucrat const &rhs);

#endif