#include "Span.hpp"

int main()
{
    Span sp = Span(6);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    // sp.addNumber(1);
    sp.addNumber(3);
    cout << sp << endl;
    // std::sort(arr, arr + n);
    std::cout << sp.longestSpan() << std::endl;
    cout << sp << endl;

    std::cout << sp.shortestSpan() << std::endl;
    cout << sp << endl;

    return 0;
}