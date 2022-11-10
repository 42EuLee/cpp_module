#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    cout << "MateriaSource default constructor called" << endl;
    this->_count = 0;
    for (int i = 0; i < 4; i++)
        this->_Materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    cout << "MateriaSource destructor called" << endl;
}

MateriaSource::MateriaSource(const MateriaSource &old_obj)
{
	cout << "MateriaSource Copy Constructor called" << endl;
	this->_count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->_Materias[i])
			delete this->_Materias[i];
		if (old_obj._Materias[i])
		{
			this->_Materias[i] = old_obj._Materias[i]->clone();
			this->_count++;
		}
		else
			this->_Materias[i] = NULL;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
		if (this->_Materias[i] == NULL)
			continue ;
		if (this->_Materias[i]->getType() == type)
			return (this->_Materias[i]->clone());
    }
    return (0);
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

MateriaSource	&MateriaSource::operator=(MateriaSource const &old_obj)
{
	cout << "MateriaSource Copy Assignment operator" << endl;
	this->_count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->_Materias[i])
			delete this->_Materias[i];
		if (old_obj._Materias[i])
		{
			this->_Materias[i] = old_obj._Materias[i]->clone();
			this->_count++;
		}
		else
			this->_Materias[i] = NULL;
	}
	return (*this);
}
