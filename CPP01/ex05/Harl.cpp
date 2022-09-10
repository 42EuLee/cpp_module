#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	int i;

	i = 0;
	string str[4] = 
	{	
		"debug",
		"info",
		"warning",
		"error"
	};

	void (Harl::*FunctionPointers[4])(void) = 
	{	
		&Harl::debug, 
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	while (i <= 4 && level.compare(str[i]))
	{
		i++;
		if (i == 4)
		{
			cout << "HOW DARE YOU WRITE AN UNEXISTING STRING, BITCH!" << endl;
			return ;
		}
	}
	(this->*FunctionPointers[i])();
}

void Harl::debug(void)
{
	cout << "OMG, WHAT ARE YOU DOING?!" << endl;
}

void Harl::info(void)
{
	cout << "STOP IT, YOU CAN'T!" << endl;
}

void Harl::warning(void)
{
	cout << "SOMEONE PLEASE HELP!" << endl;
}

void Harl::error(void)
{
	cout << "PLEASE DON'T, I BEG OF YOU..." << endl;
}
