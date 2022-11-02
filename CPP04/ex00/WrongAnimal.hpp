#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
	protected:
		string _type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &old_obj);
		void makeSound() const;
		const string	&getType( void ) const ;
};

#endif