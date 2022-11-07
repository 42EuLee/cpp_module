#include "Character.hpp"

Character::Character(string &name)
{
    cout << "Default Character Constructor called" << endl;
    this->_name = name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    this->_count = 0;
}

Character::~Character()
{
    cout << "Default Destructor Called" << endl;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
    if (this->_count > 3)
    {
        cout << this->_name << "'s inventory is full !!" << endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
            this->_inventory[i] = m.clone();
        cout << this->_name << "has equiped Materia Type" << endl;
        // I AM HERE
    }
}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{
    
}