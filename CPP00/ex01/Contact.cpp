#include "Contact.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::getline;

Contact::Contact()
{
	// cout << "Contact constructor called" << endl;
	string	_first_name = "";
	string	_last_name = "";
	string	_nick_name = "";
	string	_darkest_secret = "";
}

Contact::~Contact()
{
	// cout << "Contact destructor called" << endl;
	return ;
}

void	Contact::set_first_name(string first_name)
{
	this->_first_name = first_name;
}
void	Contact::set_last_name(string last_name)
{
	this->_last_name = last_name;
}
void	Contact::set_nick_name(string nick_name)
{
	this->_nick_name = nick_name;
}
void	Contact::set_darkest_secret(string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}
void	Contact::set_phone_no(string phone_no)
{
	this->_phone_no = phone_no;
}



string	Contact::get_first_name(void)
{
	return (this->_first_name);
}
string	Contact::get_last_name(void)
{
	return (this->_last_name);
}
string	Contact::get_nick_name(void)
{
	return (this->_nick_name);
}
string	Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}
string	Contact::get_phone_no(void)
{
	return(this->_phone_no);
}