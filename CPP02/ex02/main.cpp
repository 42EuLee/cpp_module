#include "Fixed.hpp"
#include "styling.h"

int main( void )
{

    {
        cout << TEL << endl;
        cout << "<-----PDF tests starts here----->\n" << RESET << endl;
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        std::cout << a << std::endl;

        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;

        // std::cout << std::endl << --a << std::endl;
        // std::cout << a << std::endl;
        // std::cout << a-- << std::endl;
        // std::cout << a << std::endl;

        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
    }

    {
        cout << TEL << endl;
        cout << "\n<------My test starts here------->" << endl << endl;
        Fixed c(4);
        Fixed d(2);
        Fixed e(4);
        Fixed f(5);
 
        // cout << "e is " << e << endl;
        // cout << "f is " << f << endl;

        cout << YLW << endl;
        cout << "<-----Simple maths and min/max test----->" << endl << endl;

        cout << ORG << endl;

        cout << "c is :                      " << c << endl;
        cout << "d is :                      " << d << endl << endl;
        cout << "Addition [c + d]       :    " << c + d << endl;
        cout << "Subtraction [c - d]    :    " << c - d << endl;
        cout << "Multiplication [c * d] :    " << c * d << endl;
        cout << "Division [c / d]       :    " << c / d << endl;
        cout << "min [c vs d]           :    " << Fixed::min( c, d ) << endl;
        cout << "max [c vs d]           :    " << Fixed::max( c, d ) << endl << endl;


        cout << YLW << endl;
        cout << "<------Comparison Operator test------>" << endl << endl;

        cout << ORG << endl;

        cout << "c is :                      " << c << endl;
        cout << "d is :                      " << d << endl;
        cout << "e is :                      " << e << endl;
        cout << "f is :                      " << f << endl << endl;


        cout << YLW << endl;
        cout << "<------Less than test---->" << endl;

        cout << BLU << "if (c < d)" << endl;
        if (c < d)
            cout  << GRN << "<c is less than d>" << endl;
        else
            cout << RED << "<c is not less than d>" << endl << endl;

        cout << BLU << "if (c < e)" << endl;
        if (c < e)
            cout << GRN << "<c is less than e>" << endl << endl;
        else
            cout << RED << "<c is not less than e>" << endl << endl;

        cout << BLU << "if (c < f)" << endl;
        if (c < f)
            cout << GRN << "<c is less than f>" << endl << endl;
        else
            cout << RED << "<c is not less than f>" << endl << endl;


        cout << YLW << endl;
        cout << "<------more than test------>" << endl;
        cout << BLU << "if (c > d)" << endl;
        if (c > d)
            cout << GRN << "<c is more than d>" << endl << endl;
        else
            cout << RED << "<c is not more than d>" << endl << endl;

        cout << BLU << "if (c > e)" << endl;
        if (c > e)
            cout << GRN << "<c is more than e>" << endl << endl;
        else
            cout << RED << "<c is not more than e>" << endl << endl;

        cout << BLU << "if (c > f)" << endl;
        if (c > f)
            cout << GRN << "<c is more than f>" << endl;
        else
            cout << RED << "<c is not more than f>" << endl << endl;


        cout << YLW << endl;
        cout << "<------less than equals test------>" << endl;
        cout << BLU << "if (c <= d)" << endl;
        if (c <= d)
            cout << GRN <<"<c is less or equals to d>" << endl << endl;
        else
            cout << RED <<"<c is not less or equals to d>" << endl << endl;

        cout << BLU <<"if (c <= e)" << endl;
        if (c <= e)
            cout << GRN << "<c is less or equals to e>" << endl << endl;
        else
            cout << RED << "<c is not less or equals to e>" << endl << endl;

        cout << BLU << "if (c <= f)" << endl;
        if (c <= f)
            cout << GRN << "<c is less or equals to f>" << endl;
        else
            cout << RED << "<c is not less or equals to f>" << endl << endl;


        cout << YLW << endl;
        cout << "<------more than equals test------>" << endl;
        cout << BLU << "if (c >= d)" << endl;
        if (c >= d)
            cout << GRN <<"<c is more or equals to d>" << endl << endl;
        else
            cout << RED <<"<c is not more or equals to d>" << endl << endl;

        cout << BLU <<"if (c >= e)" << endl;
        if (c >= e)
            cout << GRN << "<c is more or equals to e>" << endl << endl;
        else
            cout << RED << "<c is not more or equals to e>" << endl << endl;

        cout << BLU << "if (c >= f)" << endl;
        if (c >= f)
            cout << GRN << "<c is more or equals to f>" << endl;
        else
            cout << RED << "<c is not more or equals to f>" << endl << endl;


        cout << YLW << endl;
        cout << "<------equals to test------>" << endl;
        cout << BLU << "if (c == d)" << endl;
        if (c == d)
            cout << GRN <<"<c is equals to d>" << endl << endl;
        else
            cout << RED <<"<c does not equals to d>" << endl << endl;

        cout << BLU << "if (c == e)" << endl;
        if (c == e)
            cout << GRN << "<c is equals to e>" << endl << endl;
        else
            cout << RED << "<c does not equals to e>" << endl << endl;

        cout << BLU << "if (c == f)" << endl;
        if (c == f)
            cout << GRN << "<c is equals to f>" << endl;
        else
            cout << RED << "<c does not equals to f>" << endl << endl;


        cout << YLW << endl;
        cout << "<------does not equals to test------>" << endl;
        cout << BLU << "if (c != d)" << endl;
        if (c != d)
            cout << GRN <<"<c is equals to d>" << endl << endl;
        else
            cout << RED <<"<c does not equals to d>" << endl << endl;

        cout << BLU << "if (c != e)" << endl;
        if (c != e)
            cout << GRN << "<c is equals to e>" << endl << endl;
        else
            cout << RED << "<c does not equals to e>" << endl << endl;

        cout << BLU << "if (c != f)" << endl;
        if (c != f)
            cout << GRN << "<c is equals to f>" << endl;
        else
            cout << RED << "<c does not equals to f>" << endl << endl;

        cout << TEL << "<End of test>"  << RESET << endl;
        return (0);
    }
}