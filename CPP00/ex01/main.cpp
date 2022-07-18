#include "phonebook.hpp"

int main()
{
	string line;
	Phonebook phonebook;

	while (1)
	{
		std::cout << "Please key in ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, line);
		if (!std::cin)
		{
			std::cout << "Phonebook exited due to EOT" << std::endl;
			return (0);
		}
		if (line == "ADD")
			phonebook.add_contact();
		else if (line == "SEARCH")
			phonebook.search_contact(); // MY SEARCH FUNCTION
		else if (line == "EXIT")
		{
			std::cout << "Phonebook exitted" << std::endl;
			return (0);
		}
		else
			std::cout << "Please key in valid command" << std::endl;

		
	}
	return (0);
}