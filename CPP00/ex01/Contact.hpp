#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

using std::string;

class Contact
{
	private:
		string	_first_name;
		string	_last_name;
		string	_nick_name;
		string	_darkest_secret;
		string	_phone_no;
		
	public:
		Contact(void);
		~Contact(void);

		void set_first_name(string first_name);
		void set_last_name(string last_name);
		void set_nick_name(string nick_name);
		void set_darkest_secret(string darkest_secret);
		void set_phone_no(string phone_no);

		string get_first_name(void);
		string get_last_name(void);
		string get_nick_name(void);
		string get_darkest_secret(void);
		string get_phone_no(void);
};

#endif