#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <iomanip>

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

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);


		Fixed operator + (const Fixed &plus);
		Fixed operator - (const Fixed &minus);
		Fixed operator * (const Fixed &multiply);
		Fixed operator / (const Fixed &divide);

		bool operator < (const Fixed &ops) const;
		bool operator <= (const Fixed &ops) const;
		bool operator > (const Fixed &ops) const;
		bool operator >= (const Fixed &ops) const;
		bool operator == (const Fixed &ops) const;
		bool operator != (const Fixed &ops) const;

		Fixed operator ++ ();
		Fixed operator -- ();
		Fixed operator ++ (int);
		Fixed operator -- (int);
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif