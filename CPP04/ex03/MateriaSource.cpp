#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    cout << "MateriaSource default constructor called" << endl;
    this->_count = 0;
    for (int i; i < 0; i++)
        this->_Materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    cout << "MateriaSource destructor called" << endl;
}

void    MateriaSource::learnMateria(AMateria *type)
{
    if (this->_count > 3)
    {
        cout << "MateriaSource is currently full !!" << endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->_Materias[i] == NULL)
        {
            this->_Materias[i] = type->clone();
            cout << "Materia has been learnt !!" << endl;
            break ;
        }
    }
    this->_count++;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_Materias[i]->getType() == type)
				return (this->_Materias[i]->clone());
    }
    return (0);
}
