#ifndef IMATERIASOURCE
#define IMATERIASOURCE

#include <iostream>

#include "AMateria.hpp"

class IMateriaSource
{
public:
    IMateriaSource();


    virtual ~IMateriaSource();
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif