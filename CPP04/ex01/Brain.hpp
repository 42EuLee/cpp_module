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
		static const int ideas = 100;
	public:
		Brain();
		~Brain();
		Brain(const Brain &old_obj);
		string brain[ideas];
		Brain 	*get_Brain(void);
};

#endif