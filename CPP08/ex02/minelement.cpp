#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <set>

 
int main()
{
    // 1 3 10 11
    // - -  -  -
    // 3 10 11 1
    // = =  =  =
    // 2 7  1  10

    int arr[] = { 5,2,3,4,6};
    // std::vector<int> v(arr, arr + 5);
 
    // std::vector<int>::iterator result = std::min_element(v.begin(), v.end());
    std::cout << "min element at: " << *result;
}