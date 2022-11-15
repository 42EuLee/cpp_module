#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "styling.h"

int main()
{
    cout << TEL << "------------------PDF Requirement------------------------" <<  RESET << endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
	cout << TEL << "------------------Personal testcases------------------------" <<  RESET << endl;
    {
        IMateriaSource* src = new MateriaSource();
        ICharacter* fella = new Character("My mom");
        ICharacter* bob = new Character("bob");
        AMateria* tmp;
    
        cout << YLW << "-----1. createMateria only works after ::MateriaSource() has the skill.-----" << RESET << endl;

    
        tmp = src->createMateria("ice"); // create ice Materia in an empty MateriaSource.
        fella->equip(tmp);
        cout << YLW << "\n-----2. Populating materiaSource with Ice and Cure (max 4 at at a time).-----" << RESET << endl;
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Cure());
        cout << YLW << "\n-----3. Creating elements after materiaSource has the said elements-----" << RESET << endl;
        tmp = src->createMateria("ice");
        fella->equip(tmp);
        delete tmp;
        cout << YLW << "\n-----4. Creating non-existing elements in MateriaSource-----" << RESET << endl;
        tmp = src->createMateria("curee");
        fella->equip(tmp);
        delete tmp;
        tmp = src->createMateria("cure");
        cout << YLW << "\n-----5. Populating Character's inventory with existing materia (max 4 at a time).-----" << RESET << endl;
        for (int i = 0 ; i < 4 ; i++)
            fella->equip(tmp);
        cout << YLW << "\n-----5. Using Populated Character's inventory.-----" << RESET << endl;        
        for (int i = 0 ; i < 4 ; i++)
            fella->use(i, *bob);
        cout << YLW << "\n-----6. Using Populated Character's inventory, after unequiping one materia.-----" << RESET << endl;                
        fella->unequip(2);
        for (int i = 0 ; i < 4 ; i++)
            fella->use(i, *bob);
        cout << YLW << "\n-----7. Using Populated Character's inventory, after reequiping the materia back-----" << RESET << endl; 
        delete tmp;
        tmp = src->createMateria("ice");
        fella->equip(tmp);
        for (int i = 0 ; i < 4 ; i++)
            fella->use(i, *bob);
        delete tmp;        
    }
    // system("leaks AMateria");
    return (0);
}
