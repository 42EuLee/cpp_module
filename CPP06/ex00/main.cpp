#include "Convert.hpp"

int main(int argc, char **argv) 
{
    if (argc == 2)
    {
		Convert string(argv[1]);
        string.convertInputs();
    	// cout << "char: " << check_char(argv[1], 0, 0) << endl;
        // cout << "Int:" << check_int(arg) << endl;
        // cout << "Double:" << check_double(arg) << endl;
        // cout << "Float:" << check_float(arg) << endl;
    }
    return (0);
}