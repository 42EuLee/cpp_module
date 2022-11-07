#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "MateriaSource.hpp"
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
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

};

#endif