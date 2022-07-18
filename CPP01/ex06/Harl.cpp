#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain( std::string level )
{
	int i;

	i = 0;
	string str[4] = {"debug", "info", "warning", "error"};

	while (i < 4 && level.compare(str[i]))
		i++;
	switch(i)
	{
		case 0 :
			Harl::debug();
		case 1 :
			Harl::info();			
		case 2 :
			Harl::warning();
		case 3 :
		{
			Harl::error();
			break ;
		}
		case 4 :
			cout << "NIOOOOH" << endl;
	}
}

void Harl::debug( void )
{
	cout << "OMG, WHAT ARE YOU DOING?!" << endl;
}

void Harl::info( void )
{
	cout << "STOP IT, YOU CAN'T!" << endl;
}

void Harl::warning( void )
{
	cout << "SOMEONE PLEASE HELP!" << endl;
}

void Harl::error( void )
{
	cout << "PLEASE DON'T, I BEG OF YOU..." << endl;
}
