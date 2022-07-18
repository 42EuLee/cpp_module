#include "phonebook.hpp"

using std::cout;
using std::endl;
using std::getline;
using std::cin;

Phonebook::Phonebook()
{
	this->contact_count = 0;
}

Phonebook::~Phonebook()
{
	return ;
}

bool isnumber(const string str)
{
	int len;

	len = str.length();
    for (int i = 0; i < len; i++) 
	{
        if (std::isdigit(str[i]) == 0) 
			return false;
    }
    return true;
}

bool isstring(const string str)
{
	int len;

	len = str.length();
    for (int i = 0; i < len; i++) 
	{
        if (std::isalpha(str[i]) == 0) 
			return false;
    }
    return true;
}

void	Phonebook::add_contact(void)
{
	string	first_name;
	string	last_name;
	string	nick_name;
	string	darkest_secret;
	string	phone_char;

	if (this->contact_count == 8)
		this->contact_count = 0;
	
	// first_name verification
	cout << "Key in First Name" << endl;
	getline(cin, first_name);
	if (first_name.length() < 1)
	{
		cout << "Please key in non-empty paramater" << endl;
		return ;
	}
	// last_name verification
	cout << "Last Name" << endl;
	getline(cin, last_name);
	if (last_name.length() < 1)
	{
		cout << "Please key in non-empty paramater" << endl;
		return ;
	}
	// nick_name verification
	cout << "Nick Name" << endl;
	getline(cin, nick_name);
	if (nick_name.length() < 1)
	{
		cout << "Please key in non-empty paramater" << endl;
		return ;
	}
	// phone_no verification
	cout << "phone number" << endl;
	getline(cin, phone_char);
	// darkest_secret verification
	cout << "Darkest Secret" << endl;
	getline(cin, darkest_secret);

	// Adding all of phonebook parameters
	this->array[this->contact_count].set_first_name(first_name);
	this->array[this->contact_count].set_last_name(last_name);
	this->array[this->contact_count].set_nick_name(nick_name);
	this->array[this->contact_count].set_phone_no(phone_char);
	this->array[this->contact_count].set_darkest_secret(darkest_secret);
	this->contact_count++;
}

void	Phonebook::list_variable(string var)
{
	int count;

	count = var.length();
	cout << "|";

	for (int j = count; j < 10; j++)
		cout << " ";
	cout << var.substr(0, 9);
	if (count == 10)
		cout << var[9];
	if (count > 10)
		cout << ".";
}

void	Phonebook::list_contact(int i)
{
	cout << endl;
	cout << "|   " << i << "   | ";
	cout << "< Key in first name: " << this->array[i].get_first_name() << ">" << endl;
	cout << "< Key in last name: " << this->array[i].get_last_name() << ">" << endl;
	cout << "< Key in nick name: " << this->array[i].get_nick_name() << ">" << endl;
	cout << "< Key in darkest secret: " << this->array[i].get_darkest_secret() << ">" << endl;
	cout << "< Key in phone number: " << this->array[i].get_phone_no() << ">" << endl;
	cout << endl;
}

void	Phonebook::search_contact(void)
{
	string str;
	string str_i;
	int	num;

	cout << "|Index     |First Name|Last Name |Nick Name | " << endl;
	for (int i = 0; i < 8; i++)
	{
		string str_i = std::to_string(i);
		list_variable(str_i);
		list_variable(this->array[i].get_first_name());
		list_variable(this->array[i].get_last_name());
		list_variable(this->array[i].get_nick_name());
		cout << "|" << endl;
	}

	cout << "Search what index??" << endl;
	std::getline(std::cin, str);
	if (isstring(str) == true)
	{
		cout << "Not a valid index, please key in an index" << endl;
		return ;
	}
	else
		cout << "not string" << endl;
	
	for (int i = 0; i < 8; i++)
	{
		num = std::stoi(str);
		if (i == num)
		{
			cout << endl;
			cout << "<" << i << ">" << endl;
			cout << "< First name: " << this->array[i].get_first_name() << " >" << endl;
			cout << "< Last Name: " << this->array[i].get_last_name() << " >" << endl;
			cout << "< Nick Name: " << this->array[i].get_nick_name() << " >" << endl;
			cout << "< Darkest Secret: " << this->array[i].get_darkest_secret() << " >" << endl;
			cout << "< Phone Number: " << this->array[i].get_phone_no() << " >" << endl;
			cout << endl;
			return ;
		}
	}
		cout << "Index not found, search for a valid index please" << endl;
}
