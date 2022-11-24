#include "Span.hpp"

int main()
{
    Span sp = Span(10000);
    sp.addAllNumbers();
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // sp.addNumber(1);
    // sp.addNumber(3);
    // std::sort(arr, arr + n);
    cout << endl << sp;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    cout << endl << sp;

    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;

    cout << endl;
    // cout << endl << sp;

    return 0;
}