#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    cout << "AMateria default constructor called" << endl;
    this->_type = type;
}

AMateria::~AMateria()
{
    cout << "AMateria destructor called" << endl;
}

AMateria::AMateria(const AMateria &old_obj)
{
    cout << "AMateria copy constructor called" << endl;
    this->_type = old_obj.getType();
}

string const &AMateria::getType() const
{
    return(this->_type);
}

AMateria *AMateria::clone() const
{

}

void AMateria::use(ICharacter& target)
{
    cout << "Uses the power of Materia" << endl;
}

AMateria &AMateria::operator=(const AMateria &ref)
{
	// cout << "Copy assignment operator called" << endl;
    this->_type = ref.getType();
    return (*this);
}
