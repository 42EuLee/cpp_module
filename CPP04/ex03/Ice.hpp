#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "styling.h"

using std::string;
using std::cout;
using std::endl;

class Ice : public AMateria
{
    protected:
        string  _type;
    public:
        Ice();
        ~Ice();
        Ice(const Ice &old_obj);
        // Ice(std::string const &type);
        std::string const & getType() const;
        Ice *clone() const;
        void use(ICharacter& target);

        Ice &operator=(const Ice &ref);

};

#endif