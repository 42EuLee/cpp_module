#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    // cout << BLU << "Cure default constructor called" << RESET << endl;
    // this->_type = "cure";
}

// Cure::Cure(std::string const &type)
// {
    // cout << "Cure constructor called" << endl;
// 	if (type == "cure")
//     	this->_type = type;
// }

Cure::~Cure()
{
    // cout << ORG << "Cure destructor called" << RESET << endl;
}

Cure::Cure(const Cure &old_obj) : AMateria("cure")
{
    // cout << YLW << "Cure copy constructor called" << RESET << endl;
	this->_type = old_obj.getType();
    // *this = old_obj;
}

Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    cout << PNK << "Cure: * heals " << BLU << target.getName() << PNK << "'s wounds *" << RESET <<endl;
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
