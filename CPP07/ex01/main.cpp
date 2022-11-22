#include "iter.hpp"

class Awesome
{
	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
	};
	std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

	template< typename T >
	void print( T const & x ) 
	{
		std::cout << x << std::endl; 
		return;
}

int main( void )
{
	// cout << endl << ORG << "----------------Iter function test-----------------" << RESET << endl;
	// cout << endl << YLW << "----------------1. int test-----------------" << RESET << endl;
	// {

	// 	int array[] = { 1, 2, 3 , 4, 5, 6 , 7, 8, 9 , 10};

	// 	cout << BLU << "-<Before adding>-" << RESET << endl;
	// 	iter(array, *(&array + 1) - array, print_array);
	// 	iter(array, *(&array + 1) - array, add);
	// 	cout << endl;
	// 	cout << BLU << "-<After adding>-" << RESET << endl;
	// 	iter(array, *(&array + 1) - array, print_array);
	// 	cout << endl;

	// }
	// cout << endl << YLW << "----------------2. double test-----------------" << RESET << endl;
	// {

	// 	double array[] = { 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5};

	// 	cout << BLU << "-<Before adding>-" << RESET << endl;
	// 	iter(array, *(&array + 1) - array, print_array);
	// 	iter(array, *(&array + 1) - array, add);
	// 	cout << endl;
	// 	cout << BLU << "-<After adding>-" << RESET << endl;
	// 	iter(array, *(&array + 1) - array, print_array);
	// 	cout << endl;
	// }
	// cout << endl << YLW << "----------------3. float test-----------------" << RESET << endl;
	// {

	// 	float array[] = { 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5};

	// 	cout << BLU << "-<Before adding>-" << RESET << endl;
	// 	iter(array, *(&array + 1) - array, print_array);
	// 	iter(array, *(&array + 1) - array, add);
	// 	cout << endl;
	// 	cout << BLU << "-<After adding>-" << RESET << endl;
	// 	iter(array, *(&array + 1) - array, print_array);
	// 	cout << endl;
	// }
	cout << endl;
	{
		int tab[] = { 0, 1, 2, 3, 4 };
		Awesome tab2[5];
		iter( tab, 5, print );
		iter( tab2, 5, print );
	}
	return (0);
}