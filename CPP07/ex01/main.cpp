#include "iter.hpp"

int main( void )
{
	int array[] = { 1, 2, 3 , 1 ,  3 , 4, 4, 5,123123 , 12,3,123 , -1};

	iter(array, *(&array + 1) - array, print_array);
	iter(array, *(&array + 1) - array, add);
	iter(array, *(&array + 1) - array, print_array);

}