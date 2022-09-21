#include "Convert.hpp"

int main(int argc, char **argv) 
{
    if (argc == 2)
    {
        string arg(argv[1]);
    	cout << "char: " << check_char(argv[1], 0, 0) << endl;
        cout << "Int:" << check_number(arg) << endl;
        cout << "Double:" << check_double(arg) << endl;
        cout << "Float:" << check_float(arg) << endl;
    }
    return 0;
}