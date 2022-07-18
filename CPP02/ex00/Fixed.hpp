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
		Fixed();
		~Fixed();
		Fixed (const Fixed &old_obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		void operator = (const Fixed &eg )
		{
			cout << "Copy assignment operator called" << endl;
			value = eg.value;
		}
};

#endif