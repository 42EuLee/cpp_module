#include "Convert.hpp"

Convert::Convert()
{
	cout << "Default constructor called" << endl;
	// this->_value = 0
};

Convert::Convert(char *input)
{
	cout << "Assignment Constructor called" << endl;

	this->_string = input;
	this->_doublenum = 0;
	this->_floatnum = 0;
	this->_intnum = 0;
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

void		Convert::convertInputs(void)
{
	
}


int	check_char(char *str, int sign, int i)
{
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

int	check_number(string &str)
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