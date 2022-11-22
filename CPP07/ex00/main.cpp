#include "whatever.hpp"

int main( void )
{
	{
		cout << endl << ORG << "----------------swap function test-----------------" << RESET << endl;
		cout << endl << YLW << "----------------1. int test-----------------" << RESET << endl;
		int a = 2;
		int b = 3;
		cout << BLU << "-<Before swap>-" << RESET << endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap( a, b );
		cout << BLU << "-<After swap>-" << RESET << endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		cout << endl << YLW << "----------------2. double test-----------------" << RESET << endl;
		double c = 2.5;
		double d = 3.5;
		cout << BLU << "-<Before swap>-" << RESET << endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap( c, d );
		cout << BLU << "-<After swap>-" << RESET << endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		cout << endl << YLW << "----------------3. float test-----------------" << RESET << endl;
		double e = 2.5555;
		double f = 3.5555;
		cout << BLU << "-<Before swap>-" << RESET << endl;
		std::cout << "e = " << e << ", f = " << f << std::endl;
		::swap( e, f );
		cout << BLU << "-<After swap>-" << RESET << endl;
		std::cout << "e = " << e << ", f = " << f << std::endl;

	}
	{
		cout << endl << ORG<< "----------------min function test-----------------" << RESET << endl;
		cout << endl << YLW << "----------------1. int test-----------------" << RESET << endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		cout << endl << YLW << "----------------2. double test-----------------" << RESET << endl;
		double c = 2.5;
		double d = 3.5;
		::swap( c, d );
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		cout << endl << YLW << "----------------3. float test-----------------" << RESET << endl;
		double e = 2.5555;
		double f = 3.5555;
		::swap( e, f );
		std::cout << "e = " << e << ", f = " << f << std::endl;
		std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;

	}
	{
		cout << endl << ORG << "----------------max function test-----------------" << RESET << endl;
		cout << endl << YLW << "----------------1. int test-----------------" << RESET << endl;
		int a = 2;
		int b = 3;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		cout << endl << YLW << "----------------2. double test-----------------" << RESET << endl;
		double c = 2.5;
		double d = 3.5;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		cout << endl << YLW << "----------------3. float test-----------------" << RESET << endl;
		double e = 2.5555;
		double f = 3.5555;
		std::cout << "e = " << e << ", f = " << f << std::endl;
		std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	}
	{
		cout << endl << YLW << "----------------PDF Requirements-----------------" << RESET << endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return 0;
}