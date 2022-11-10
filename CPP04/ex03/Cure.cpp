#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    cout << "Cure default constructor called" << endl;
    // this->_type = "cure";
}

// Cure::Cure(std::string const &type)
// {
//     cout << "Cure constructor called" << endl;
// 	if (type == "cure")
//     	this->_type = type;
// }

Cure::~Cure()
{
    cout << "Cure destructor called" << endl;
}

Cure::Cure(const Cure &old_obj) : AMateria("cure")
{
    cout << "Cure copy constructor called" << endl;
	this->_type = old_obj.getType();
    // *this = old_obj;
}

Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    cout << "Cure: * heals " << target.getName() << "'s wounds *" << endl;
}

Cure &Cure::operator=(const Cure &ref)
{
    // cout << "Copy assignment operator called" << endl;
    this->_type = ref.getType();
    return (*this);
}

string const &Cure::getType() const
{
    return (this->_type);
}
