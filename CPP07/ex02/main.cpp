#include "Array.tpp"

int main( void )
{
	Array<int> arr(void);

    Array<int> arr1(3);
    Array<int> arr2 = arr1;

    arr1[0] = 1;
    arr1[1] = 5;
    arr1[2] = 10;
    std::cout << "arr1 : ";
    std::cout << arr1[0] << ", ";
    std::cout << arr1[1] << ", ";
    std::cout << arr1[2] << std::endl;
    std::cout << arr1[-23523] << std::endl;
    std::cout << arr1[3] << std::endl; // out of bounds
    std::cout << "size : " << arr1.size() << std::endl;

    std::cout << "arr2 : ";
    std::cout << arr2[0] << ", ";
    std::cout << arr2[1] << ", ";
    std::cout << arr2[2] << std::endl;
    std::cout << "size : " << arr2.size() << std::endl;

    Array<int> arr3 = arr1;
    std::cout << "arr3 : ";
    std::cout << arr3[0] << ", ";
    std::cout << arr3[1] << ", ";
    std::cout << arr3[2] << std::endl;
    std::cout << "size : " << arr3.size() << std::endl;

    arr3[0] = 3;
    arr3[1] = 6;
    arr3[2] = 9;
    Array<int> arr4(arr3);
    std::cout << "arr4 : ";
    std::cout << arr4[0] << ", ";
    std::cout << arr4[1] << ", ";
    std::cout << arr4[2] << std::endl;
    std::cout << "size : " << arr4.size() << std::endl;

    return (0);

}