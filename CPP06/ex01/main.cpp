#include "Data.hpp"
#include "styling.h"

int main(void)
{
	Data		*data;
	Data		*deserialize;
	uintptr_t	serial;

	data = new Data(100);
	cout << BLU << "Data address: " << RESET << "|" << data << "|" << endl;

	serial = serialize(data);
	cout << GRN << "Serialized data: " << RESET << "|" <<  serial << "|" << endl; 

	deserialize = deserialization(serial);
	cout << RED << "Deserialized data: " << RESET << "|" << deserialize << "|" << endl; 
	delete (data);

}