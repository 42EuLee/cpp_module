#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <set>

 
int main()
{
    int arr[] = { 5,1,2,3,6};
    std::vector<int> v(arr, arr + 5);
 
    std::vector<int>::iterator result = std::min_element(v.begin(), v.end());
    std::cout << "min element at: " << *result;
}