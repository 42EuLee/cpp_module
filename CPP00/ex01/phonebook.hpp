#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

using std::string;

class Phonebook
{
	private:
		Contact array[8];
		int 	contact_count;
	
	public:
		Phonebook(void);
		~Phonebook(void);

		void	add_contact(void);
		void	search_contact(void);
		void	list_all_contact(void);
		void	list_contact(int i);
		void	list_variable(string var);
};

#endif