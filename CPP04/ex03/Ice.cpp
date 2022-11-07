#include "Ice.hpp"

Ice::Ice()
{
    cout << "Ice default constructor called" << endl;
    this->_type = "ice";
}

Ice::~Ice()
{
    cout << "Ice destructor called" << endl;
}

Ice::Ice(const Ice &old_obj)
{
    cout << "Ice copy constructor called" << endl;
    *this = old_obj;
}

Ice::Ice(std::string const &type)
{
    this->_type = type;
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

