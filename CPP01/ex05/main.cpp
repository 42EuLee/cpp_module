#include "Harl.hpp"

using std::string;
using std::endl;
using std::cout;

int main(int argc, char **argv)
{
    Harl harl;

    if (argc == 2)
        harl.complain(argv[1]);
    return (0);
}