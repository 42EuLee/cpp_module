#include "easyfind.hpp"

// int main( void )
// {
// 	Array<int> arr(void);

//     Array<int> arr1(5);

//     arr1[0] = 1;
//     arr1[1] = 5;
//     arr1[2] = 10;
//     arr1[3] = 15;
//     arr1[4] = 20;

//     easyFind(arr1, 21);


//     return (0);

// }

// int main()
// {
//     // int asize;
//     Array<int> arr1(5);

//     arr1.arraySize = 5;
//     arr1[0] = 1;
//     arr1[1] = 5;
//     arr1[2] = 20;
//     arr1[3] = 15;
//     arr1[4] = 10;
//     // cout << "sizeof(array)/ sizeof(array[0]): " << (sizeof(arr1.getArray())/ sizeof(arr1.getIndexNum(0))) << endl;

//     int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

//     std::vector<int> myvector(a, a + 10);
//     // std::vector<int> myvector(arr1.getArray(), arr1.getArray() + 4);
//     std::vector<int>::iterator iterate;

//     iterate = find (myvector.begin(), myvector.end(), 2);
//     if (iterate != myvector.end())
//         std::cout << "Element found in container: " << *iterate << endl;
//     else
//         std::cout << "Element not found in container" << endl;

 
//     return 0;
// }

int main( void )
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    std::vector<int> myvector(a, a + 10);
    std::deque<int> mydeque(a, a + 10);
    std::forward_list<int> myforwardlist(a, a + 10);
    std::list<int> mylist(a, a + 10);

    easyFind(myvector, 8);
    easyFind(mydeque, 8);
    easyFind(myforwardlist, 8);
    easyFind(mylist, 8);

    return (0);

}