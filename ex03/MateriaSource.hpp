#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

# ifndef MATERIAS_SIZE
# define MATERIAS_SIZE 4
# endif

class MateriaSource:public IMateriaSource
{
private:
    AMateria    **materias;
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource&  operator=(const MateriaSource& other);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif