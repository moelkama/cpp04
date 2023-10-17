#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    std::cout<<"MateriaSource constractor called"<<std::endl;
    this->materias = new   AMateria*[MATERIAS_SIZE];
    //chof new NULL;

    for (int i = 0; i < MATERIAS_SIZE; i++)
        this->materias[i] = NULL;
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
    for(int i = 0; i < MATERIAS_SIZE; i++)
        delete  materias[i];
    delete[]    materias;
}

void MateriaSource::learnMateria(AMateria* m)
{
    // std::cout<<"learnMateria called"<<std::endl;
    int i = 0;

    for (i = 0 ; i < MATERIAS_SIZE && this->materias[i]; i++);
    if (i < MATERIAS_SIZE)
        this->materias[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    // std::cout<<"creatMateria called"<<std::endl;
    int i = 0;

    for (i = 0; i < MATERIAS_SIZE && this->materias[i] && type != materias[i]->getType(); i++);
    if (i < MATERIAS_SIZE &&  this->materias[i] && type == materias[i]->getType())
        return (materias[i]->clone());
    return (NULL);
}