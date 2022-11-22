#include "Array.tpp"
#include "styling.h"

int main( void )
{
    Array<int> arr1(3);
    arr1[0] = 1;
    arr1[0] = 1;
    arr1[1] = 5;
    arr1[2] = 10;
	cout << endl << YLW << "------------Passing 3 numbers into an <int> array---------------" << RESET << endl;
    std::cout << "arr1 : ";
    std::cout << arr1[0] << ", ";
    std::cout << arr1[1] << ", ";
    std::cout << arr1[2] << std::endl;
    // std::cout << arr1[-23523] << std::endl; // out of bounds
    // std::cout << arr1[3] << std::endl; // out of bounds
    std::cout << "size : " << arr1.size() << std::endl;

	cout << endl << YLW << "------------Using a copy constructor---------------" << RESET << endl;
	cout << BLU << "-<arr2 is a copy of one and should be the same>-" << RESET << endl;
    Array<int> arr2 = arr1;
    std::cout << "arr2 : ";
    std::cout << arr2[0] << ", ";
    std::cout << arr2[1] << ", ";
    std::cout << arr2[2] << std::endl;
    std::cout << "size : " << arr2.size() << std::endl;

	cout << endl << YLW << "------------Passing 3 numbers into an <float> array---------------" << RESET << endl;
    Array<float> arr3(3);
    arr3[0] = 1.123213;
    arr3[1] = 2.232323;
    arr3[2] = 5.52423432;
    std::cout << "arr3 : ";
    std::cout << arr3[0] << ", ";
    std::cout << arr3[1] << ", ";
    std::cout << arr3[2] << std::endl;
    std::cout << "size : " << arr3.size() << std::endl;

    cout << endl << YLW << "------------Passing 4 numbers into an <double> array---------------" << RESET << endl;
    Array<double> arr4(4);
    arr4[0] = 3.123213;
    arr4[1] = 6.232323;
    arr4[2] = 9.52423432;
    arr4[3] = 21.52423432;
    std::cout << "arr4 : ";
    std::cout << arr4[0] << ", ";
    std::cout << arr4[1] << ", ";
    std::cout << arr4[2] << ", ";
    std::cout << arr4[3] << std::endl;
    std::cout << "size : " << arr4.size() << std::endl;

    // system("leaks Array_template");
    return (0);
}