#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    cout << "Ice default constructor called" << endl;
    // this->_type = "ice";
}

// Ice::Ice(std::string const &type)
// {
// 	cout << "Ice constructor called" << endl;
// 	if (type == "ice")
// 		this->_type = type;
// }

Ice::~Ice()
{
    cout << "Ice destructor called" << endl;
}

Ice::Ice(const Ice &old_obj) : AMateria("ice")
{
    cout << "Ice copy constructor called" << endl;
    this->_type = old_obj.getType();
    // *this = old_obj;
}

Ice *Ice::clone() const
{
    return(new Ice());
}

void Ice::use(ICharacter& target)
{
    cout << "Ice: * shoots an ice bolt at " << target.getName() << " *" << endl;
}

Ice &Ice::operator=(const Ice &ref)
{
    // cout << "Copy assignment operator called" << endl;
    this->_type = ref.getType();
    return (*this);
}

string const &Ice::getType() const
{
    return (this->_type);
}

