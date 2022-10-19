#include "Convert.hpp"

Convert::Convert()
{
	cout << "Default constructor called" << endl;
};

Convert::Convert(char *input)
{
	cout << "Assignment Constructor called" << endl;

	this->_char_string = input;
	this->_character = '\0';
	this->_doublenum = 0;
	this->_floatnum = 0;
	this->_intnum = 0;

	this->_special_cases = 0;
	this->_special_double = "";
	this->_special_float = "";
}

Convert::~Convert()
{
	cout << "Destructor called" << endl;
}

Convert::Convert(const Convert &ref)
{
	cout << "Copy constructor called" << endl;
	*this = ref;
}

Convert &Convert::operator=(const Convert &ref)
{
	cout << "Copy assignment operator called" << endl;
	this->_char_string = ref.getCharString();
	this->_character = '\0';
	this->_doublenum = 0;
	this->_floatnum = 0;
	this->_intnum = 0;

	this->_special_cases = 0;
	this->_special_double = "";
	this->_special_float = "";
	return (*this);
}

void		Convert::print_values(string &str)
{
	if (this->_special_cases == 1)
	{
		cout << "char: |Impossible|" << endl;
		cout << "int: |Impossible|" << endl;
		cout << "float: |" << this->_special_float << "|" << endl;
		cout << "double: |" << this->_special_double << "|"<< endl;
		return ;
	}
	if (this->_doublenum >= 0 && this->_doublenum <= 32)
		cout << "char: " << "|Non-displayable|" << endl;
	else if (this->_doublenum < 0 || this->_doublenum > 127)
		cout << "char: " << "|Impossible|" << endl;
	else
		cout << "char: |" << this->_character << "|" << endl;

	if (check_int_overflow(str) == 1)
		cout << "int: |Impossible|"<< endl;
	else
		cout << "int: |" << this->_intnum << "|" << endl;
	cout <<  std::fixed << std::setprecision(1) << "float: |" << this->_floatnum << "f|" << endl;
	cout << "double: |" << this->_doublenum << "|" << endl;
}

void	Convert::convert_char(string &str)
{
	this->_character = str[0];
	this->_intnum = static_cast<int>(this->_character);
	this->_doublenum = static_cast<double>(this->_character);
	this->_floatnum = static_cast<float>(this->_character);
	return ;
}

void	Convert::convert_int(string &str)
{
	this->_intnum = atoi(str.c_str());
	this->_character = static_cast<char>(this->_intnum);
	this->_doublenum = static_cast<double>(this->_intnum);
	this->_floatnum = static_cast<float>(this->_intnum);
	return ;
}

void	Convert::convert_double(string &str)
{
	this->_doublenum = atof(str.c_str());
	this->_character = static_cast<char>(this->_doublenum);
	this->_intnum = static_cast<int>(this->_doublenum);
	this->_floatnum = static_cast<float>(this->_doublenum);
	return ;
}

void	Convert::convert_float(string &str)
{
	this->_floatnum = atof(str.c_str());
	this->_character = static_cast<char>(this->_floatnum);
	this->_intnum = static_cast<int>(this->_floatnum);
	this->_doublenum = static_cast<double>(this->_floatnum);
	return ;
}

void		Convert::convertInputs()
{
	string string = this->_char_string;
	if (check_special(string) == 1)
	{
		cout << "Special donezo" << endl;
		this->_special_cases = 1;
		print_values(string);
		return ;
	}
	if (check_char(this->_char_string) == 1)
	{
		cout << "Entered char" << endl;
		convert_char(string);
		print_values(string);
		return ;
	}
	else if (check_int(string) == 1)
	{
		cout << "Entered int" << endl;
		convert_int(string);
		print_values(string);
		return ;
	}
	else if (check_double(string) == 1)
	{
		cout << "Entered double" << endl;
		convert_double(string);
		print_values(string);
		return ;
	}
	else if (check_float(string) == 1)
	{
		cout << "Entered float" << endl;
		convert_double(string);
		print_values(string);
		return ;
	}
	else
		cout << "Invalid Input" << endl;
}

int Convert::check_int_overflow(string &str)
{
	double	tmp;

	tmp = atof(str.c_str());
	if (tmp < INT_MIN || tmp > INT_MAX)
	{
		this->_doublenum = static_cast<double>(tmp);
		this->_floatnum = static_cast<float>(tmp);
		return (1);
	}
	return (0);
}


int	Convert::check_special(string &str)
{
	string double_str[] = {"-inf", "+inf" , "nan", "inf", ""};
	string float_str[] = {"-inff", "+inff", "nanf", "inff", ""};
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4 && j < 2)
	{
		if (i == 4)
		{
			j++;
			continue;
		}
		if (str == double_str[i])
		{
			this->_special_double = str;
			this->_special_float = str + "f";
			return (1);
		}
		if (str == float_str[i])
		{
			this->_special_double = str.substr(0, str.size() - 1);
			this->_special_float = str;
			return (1);
		}
		i++;	
	}
	return (0);
}

int	check_char(char *str)
{
	if (str[0] >= 0 && str[0] <= 127 && std::strlen(str) == 1 && isdigit(str[0]) == 0)
		return (1);
	return (0);
}

int	check_int(string &str)
{
	int	i;

	i = 0;
	if ((str[0] == '-' || str[0] == '+'))
		i++;
	while (i < (int)str.size())
	{
		if (isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_double(string &str)
{
	int	i;
	int	decimal;

	decimal = 0;
	i = 0;
	if ((str[0] == '-' || str[0] == '+'))
		i++;
	while (i < (int)str.size())
	{
		if (isdigit(str[i]) == 0 && str[i] != '.')
			return (0);
		if (str[i] == '.')
			decimal++;
		if (decimal > 1)
			return (0);
		i++;
	}
	return (1);
}

int	check_float(string &str)
{
	int	i;
	int	decimal;

	decimal = 0;
	i = 0;
	if ((str[0] == '-' || str[0] == '+'))
		i++;
	while (i < (int)str.size())
	{
		if (i == ((int)str.size() - 1))
		{
			if (str[i] == 'f')
				break;
			return (0);
		}
		if (isdigit(str[i]) == 0 && str[i] != '.')
			return (0);
		if (str[i] == '.')
			decimal++;
		if (decimal > 1)
			return (0);
		i++;
	}
	return (1);
}

char 	*Convert::getCharString(void) const
{
	return (this->_char_string);
}
