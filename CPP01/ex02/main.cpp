#include <iostream>
#include <cstdio>

using std::cout;
using std::endl;
using std::string;

int	main()
{
	string brain;
	string *stringPTR;
	string &stringREF = brain;

	brain  = "HI THIS IS BRAIN";
	stringPTR = &brain;

	cout << "Address: " << &brain << endl;
	cout << "Address: " << stringPTR << endl;
	cout << "Address: " << &stringREF << endl;
	// printf("Address: %p\n", brain.c_str());
	// printf("Address: %p\n", stringPTR);
}