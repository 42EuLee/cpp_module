#include "Character.hpp"
// #include "AMateria.hpp"

Character::Character()
{
    cout << "Default Character Constructor called" << endl;
	this->_name = "nameless";
	for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
	this->_count = 0;
}

Character::Character(string const name)
{
    cout << "Character Constructor called" << endl;
    this->_name = name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    this->_count = 0;
}


Character::~Character()
{
    cout << "Destructor Called" << endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
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
		{
            this->_inventory[i] = m->clone();
			cout << this->_name << "has equiped Materia Type" << endl;
			break ;
		}
    }
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		cout << "Unable to unequip as the inventory slot is invalid" << endl;
		return ;
	}
	else if (this->_inventory[idx] == NULL)
	{
		cout << "Unable to unequip an empty inventory slot." << endl;
		return ;
	}
	else
	{
		this->_inventory[idx] = NULL;
		cout << "Inventory " << idx << " has been unequiped !!" << endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		cout << "Unable to use as the inventory slot is invalid" << endl;
		return ;
	}
	else if (this->_inventory[idx] == NULL)
	{
		cout << "Unable to use an empty inventory slot." << endl;
		return ;
	}
	else
    	this->_inventory[idx]->use(target);
}

Character::Character(const Character &old_obj)
{
		cout << "Character copy assignment operator called" << endl;
	    this->_name = old_obj.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (old_obj._inventory[i])
			{
				this->_inventory[i] = old_obj._inventory[i]->clone();
				this->_count++;
			}
		}
}

Character &Character::operator=(const Character &ref)
{
	cout << "Copy assignment operator called" << endl;
    this->_name = ref.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (ref._inventory[i])
		{
			this->_inventory[i] = ref._inventory[i]->clone();
			this->_count++;
		}
	}
    return (*this);
}
