#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    std::cout<<"MateriaSource constractor called"<<std::endl;
    this->materias = new   AMateria*[MATERIAS_SIZE];

    for (int i = 0; i < MATERIAS_SIZE; i++)
        this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    this->materias = new   AMateria*[MATERIAS_SIZE];

    for (int i = 0; i < MATERIAS_SIZE; i++)
        this->materias[i] = NULL;
    *this = other;
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& other)
{
    for (int i = 0; i < MATERIAS_SIZE; i++)
    {
        delete  this->materias[i];
        if (other.materias[i])
            this->materias[i] = other.materias[i]->clone();
        else
            this->materias[i] = NULL;
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout<<"MateriaSource Destructor called"<<std::endl;
    for(int i = 0; i < MATERIAS_SIZE; i++)
        delete  materias[i];
    delete  materias;
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;

    for (i = 0; i < MATERIAS_SIZE &&  this->materias[i]; i++);
    if (i < MATERIAS_SIZE)
        this->materias[i] = m;
    else
        delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;

    for (i = 0; i < MATERIAS_SIZE && this->materias[i] && type != materias[i]->getType(); i++);
    if (i < MATERIAS_SIZE &&  this->materias[i] && type == materias[i]->getType())
        return (materias[i]->clone());
    return (NULL);
}