#include <set>
#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>

using std::cout;
using std::endl;

void print(std::vector <int> const &a)
{
    cout << "The vector elements are : ";

    for (int i = 0; i < a.size(); i++)
        cout << a.at(i) << ' ';
    cout << endl;
}

int op_increase(int i) { return ++i; }

int main()
{
    int arr[] = { 5,1,1,2,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::vector<int> vect(arr, arr + 6);
    std::sort(vect.begin(), vect.end());
    std::transform(vect.begin(), vect.end(), vect.begin(), op_increase);
    // vectc now contains 2,2,3,3,4  
    // std::transform(vect.begin(), vect.end(), vect.begin(), op_print);
    print(vect);
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
}