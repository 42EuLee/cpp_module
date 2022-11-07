#include "Cure.hpp"

Cure::Cure()
{
    cout << "Cure default constructor called" << endl;
    this->_type = "cure";
}

Cure::~Cure()
{
    cout << "Cure destructor called" << endl;
}

Cure::Cure(const Cure &old_obj)
{
    cout << "Cure copy constructor called" << endl;
    *this = old_obj;
}

Cure::Cure(std::string const &type)
{
    this->_type = type;
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
