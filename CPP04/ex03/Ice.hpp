#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

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
        Ice(std::string const &type);
        //something
        std::string const & getType() const; //Returns the materia type
        Ice *clone() const;
        void use(ICharacter& target);


        Ice &operator=(const Ice &ref);

};

#endif