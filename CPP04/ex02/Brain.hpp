#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;

class Brain
{
	private:
		string	_ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &old_obj);
		void 	getBrain(void) const;
		Brain	&operator=(const Brain &ref);
};

#endif

