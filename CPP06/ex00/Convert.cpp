#include "Convert.hpp"

Convert::Convert()
{
	cout << "Default constructor called" << endl;
	// this->_value = 0
};

Convert::Convert(char *input)
{
	cout << "Assignment Constructor called" << endl;

	this->_char_string = input;
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
	if (this != &ref)
		*this = ref;
	return (*this);
}

// Convert &Convert::operator<<(const Convert &ref)
// {
// 	cout << "Copy assignment operator called" << endl;
// 	if (this != &ref)
// 		*this = ref;
// 	return (*this);
// }

void		Convert::print_values(int cases)
{
	string string = this->_char_string;

	if (this->_special_cases == 1)
	{
		
		cout << "char: impossible" << endl;
		cout << "int: impossible" << endl;
		cout << "float: " << this->_special_float << endl;
		cout << "double: " << this->_special_double << endl;
		return ;
	}
	if (cases == 1)
	{
		cout << "int: " << this->_intnum << endl;
		cout <<  std::fixed << std::setprecision(1) << "float: " << this->_floatnum << "f" << endl;
		cout << "double: " << this->_doublenum << endl;
	}
	if (cases == 2)
	{
		cout << "int: " << this->_intnum << endl;
		cout <<  std::fixed << std::setprecision(1) << "float: " << this->_floatnum << "f" << endl;
		cout << "double: " << this->_doublenum << endl;
	}
	if (cases == 3)
	{
		cout << "int: " << this->_intnum << endl;
		cout <<  std::fixed << std::setprecision(1) << "float: " << this->_floatnum << "f" << endl;
		cout << "double: " << this->_doublenum << endl;
	}
}

void	Convert::convert_int(string &str)
{
	this->_intnum = atoi(str.c_str());
	this->_doublenum = static_cast<double>(this->_intnum);
	this->_floatnum = static_cast<float>(this->_intnum);
	return ;
}

void	Convert::convert_double(string &str)
{
	this->_doublenum = atof(str.c_str());
	this->_intnum = static_cast<int>(this->_doublenum);
	this->_floatnum = static_cast<float>(this->_doublenum);
	return ;
}

void	Convert::convert_float(string &str)
{
	this->_floatnum = atof(str.c_str());
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
		print_values(0);
		return ;
	}
	if (check_int(string) == 1)
	{
		cout << "Entered int" << endl;
		convert_int(string);
		print_values(1);
		return ;
	}
	else if (check_double(string) == 1)
	{
		cout << "Entered double" << endl;
		convert_double(string);
		print_values(2);
		return ;
	}
	else if (check_float(string) == 1)
	{
		cout << "Entered float" << endl;
		convert_double(string);
		print_values(3);
		return ;
	}
	else
		cout << "Entered your mom" << endl;
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

int	check_char(char *str, int sign, int i)
{
	// not implemented yet
	if ((str[0] == '-' || str[0] == '+') && sign == 0)
	{
		check_char(str++, 1, 0);
	}
	if ((isdigit(str[i]) == 1) && i < 3)
	{
		if (str[i] >= 0 && str[i] == 1 && i == 0)
			cout << "entered" << endl;
		if (str[i] >= 0 && str[1] <= 9 && i == 1)
			cout << "entered2" << endl;
		if (str[i] >= 0 && str[i] <= 7 && i == 2)
			cout << "entered3" << endl;
		if (str[i + 1] == '.')
			cout << "dumb" << endl;
	}
	
	return (1);
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

// std::ostream &operator<<(std::ostream &out, Convert const &rhs)
// {
//     out << rhs.getName() << " grade <" << rhs.getGrade() << ">" << endl;
//     return (out); 
// }