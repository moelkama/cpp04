#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource&  operator=(const MateriaSource& other);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif