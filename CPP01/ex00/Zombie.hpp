#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;

class Zombie
{
	private:
		string _name;
		string testin;
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		string	getName(void);
		void	setName(string name);

};

Zombie* newZombie(string name);
void randomChump(string name);

#endif