#include "Data.hpp"

Data::Data()
{
	cout << "Default constructor called" << endl;
}

Data::Data(int number)
{
	cout << "Constructor called" << endl;
	this->_number = number;
}

Data::~Data()
{
	cout << "Destructor called" << endl;
}

Data::Data(const Data &ref)
{
	cout << "Copy constructor called" << endl;
	*this = ref;
}

Data &Data::operator=(const Data &ref)
{
	cout << "Copy assignment operator called" << endl;
	this->_number = ref.getNumber();
	return (*this);
}

int	Data::getNumber() const
{
	return (this->_number);
}


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialization(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}