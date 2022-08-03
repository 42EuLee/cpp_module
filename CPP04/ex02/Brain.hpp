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
		string	ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &old_obj);
		Brain	&operator=(const Brain &obj);
		void	changeIdea(int id, string word);
		const string	&getIdea(int id) const;
};

#endif