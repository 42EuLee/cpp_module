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
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		string	getName(void);
		void	setName(string name);

};


Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif