#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <climits>

using std::string;
using std::cout;
using std::endl;

class Convert
{
	private:

		int		_special_cases;
		char	*_char_string;
		int		_intnum;
		float	_floatnum;
		double	_doublenum;

		string _special_double;
		string _special_float;
	public:
		Convert();
		Convert(char *input);
		~Convert();
		Convert(const Convert &old_obj);

		Convert &operator=(const Convert &ref);

		int		check_special(string &str);
		void	convertInputs();
		void	printValuess(int cases);
		void	convert_int(string &str);

};

std::ostream &operator << (std::ostream &out, Convert const &rhs);
int	check_char(char *str, int sign, int i);
int	check_number(string &str);
int	check_double(string &str);
int	check_float(string &str);

#endif