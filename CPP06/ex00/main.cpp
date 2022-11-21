#include "Convert.hpp"
#include "styling.h"

int main(int argc, char **argv) 
{
    if (argc == 2)
    {
		Convert string(argv[1]);
        // Convert haha(string);
        // string = haha;
        // haha.convertInputs();
        string.convertInputs();
    }
    else
        cout << RED << "Please key in one input." << RESET << endl;
    return (0);
}