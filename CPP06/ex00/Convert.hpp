#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cmath>

using std::string;
using std::cout;
using std::endl;

class Convert
{
	private:
		char	*_string;
		int		_intnum;
		float	_floatnum;
		double	_doublenum;
	public:
		Convert();
		Convert(char *input);
		~Convert();
		Convert(const Convert &old_obj);
		Convert &operator=(const Convert &ref);
};

int	check_char(char *str, int sign, int i);
int	check_number(string &str);
int	check_double(string &str);
int	check_float(string &str);

#endif