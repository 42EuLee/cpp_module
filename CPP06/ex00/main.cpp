#include "Convert.hpp"

int main(int argc, char **argv) 
{
    if (argc == 2)
    {
		Convert string(argv[1]);
        Convert haha(string);
        haha.convertInputs();
        // string.convertInputs();
    }
    else
        cout << "Please key in one input." << endl;
    return (0);
}