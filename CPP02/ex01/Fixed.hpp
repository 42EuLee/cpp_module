#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

using std::string;
using std::cout;
using std::endl;

class Fixed
{
	private:
		int					_value ;
		static const int	_bits = 8;
	public:
		Fixed(); // default constructor
		~Fixed();
		Fixed (const Fixed &old_obj); // copy constructor
		Fixed(const int intnum); // int constructor
		Fixed(const float floatnum); // float constructor
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
		Fixed &operator=(const Fixed &ref);
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif