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
		Fixed();
		~Fixed();
		Fixed (const Fixed &old_obj);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &ref);
};

#endif