#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

using std::string;
using std::cout;
using std::endl;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif