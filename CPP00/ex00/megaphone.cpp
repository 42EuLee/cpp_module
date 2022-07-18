#include <iostream>

std::string remove_spaces(std::string str)
{
    const std::string alphabet(" ");

    size_t first = str.find_first_not_of(alphabet);
    size_t last = str.find_last_not_of(alphabet);
    return (str.substr(first, last - first + 1));
}

std::string	convert_case(std::string str)
{
	int	i;
	int	len;

	len = str.length();
	i = 0;
	while (i < len)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(int argc, char** argv)
{
	std::string str;
	std::string caps;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			str = remove_spaces(str);
			caps = convert_case(str);
			std::cout << caps << " ";
		}
		std::cout << "\n";
	}
	return (0);
}
