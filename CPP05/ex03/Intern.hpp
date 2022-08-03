#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

using std::cout;
using std::endl;
using std::string;
using std::exception;

class Intern
{
	private:
		void robotomy(void);
		void presidential(void);
		void shrubbery(void);
	public:
		Intern();
		~Intern();
		Intern(const Intern &old_obj);
		Form *makeForm(string form, string name);
};

#endif