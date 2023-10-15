#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    std::cout<<"MateriaSource constractor called"<<std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    *this = other;
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& other)
{
    // this->
    (void)other;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout<<"MateriaSource Destructor called"<<std::endl;
}

void MateriaSource::learnMateria(AMateria*)
{
    std::cout<<"learnMateria called"<<std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    std::cout<<"creatMateria called"<<std::endl;
    if (type == "Ice")
        return (new Ice());
    if (type == "Cure")
        return (new Cure());
    return (NULL);
}