#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

using std::string;
using std::cout;
using std::endl;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_Materias[4];
        int         _count;

    public:
        MateriaSource();
        ~MateriaSource();
		MateriaSource(const MateriaSource &old_obj);

        virtual void 		learnMateria(AMateria*);
        virtual AMateria	*createMateria(std::string const & type);

		MateriaSource		&operator=(const MateriaSource &old_obj);
};

#endif