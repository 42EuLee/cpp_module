#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "styling.h"

using std::string;
using std::cout;
using std::endl;

class Cure : public AMateria
{
    protected:
        string  _type;
    public:
        Cure();
        ~Cure();
        Cure(const Cure &old_obj);
        // Cure(std::string const &type);
        std::string const & getType() const;
        Cure *clone() const;
        void use(ICharacter& target);

        Cure &operator=(const Cure &ref);

};

#endif