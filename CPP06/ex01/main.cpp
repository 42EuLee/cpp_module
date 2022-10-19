#include "Data.hpp"

int main(void)
{
	Data		*data;
	Data		*deserialize;
	uintptr_t	serial;

	data = new Data(100);
	serial = serialize(data);
	cout << data << endl;
	cout << serial << endl;
	deserialize = deserialization(serial);
	cout << deserialize << endl;
	delete (data);

}