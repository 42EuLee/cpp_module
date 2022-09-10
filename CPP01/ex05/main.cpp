#include "Harl.hpp"

using std::string;
using std::endl;
using std::cout;

int main()
{
    Harl harl;

    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    harl.complain("derp");
    return (0);
}