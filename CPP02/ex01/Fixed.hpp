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
		int value ;
		static const int bits = 8;
	public:
		Fixed(); // default constructor
		~Fixed();
		Fixed (const Fixed &old_obj); // copy constructor
		Fixed(const int intnum); // int constructor
		Fixed(const float floatnum); // float constructor
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;
		void operator = (const Fixed &eg );
};

std::ostream & operator << (std::ostream &o, Fixed const &rhs);

#endif