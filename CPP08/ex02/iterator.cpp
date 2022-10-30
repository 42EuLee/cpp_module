#include <set>
#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>

using std::cout;
using std::endl;

// void print(std::vector <int> const &a)
// {
//     cout << "The vector elements are : ";

//     for (int i = 0; i < a.size(); i++)
//         cout << a.at(i) << ' ';
//     cout << endl;
// }

int op_increase(int i) { return ++i; }

int main()
{
    // int *arr = new int [5];
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 4;
    // arr[3] = 7;
    // arr[4] = 11;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    // std::vector<int> vect(arr, arr + 6);
    std::sort(arr, arr + n);
    // std::transform(vect.begin(), vect.end(), vect.begin(), op_increase);
    std::transform(arr, arr + 5, arr , op_increase);
    // vectc now contains 2,2,3,3,4  
    // std::transform(vect.begin(), vect.end(), vect.begin(), op_print);
    // print(vect);
    for (int i = 0; i<n; i++)
        cout << arr[i] << " ";
}