#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout<<"Cure Constractor Called"<<std::endl;
}

Cure::Cure(const Cure& other)
{
    *this = other;
}

Cure&   Cure::operator=(const Cure& other)
{
    (void)other;
    return (*this);
}

Cure::~Cure()
{
    std::cout<<"Cure Destructor Called"<<std::endl;
}

Cure* Cure::clone() const
{
    Cure *ptr;

    ptr = new   Cure();
    if (ptr)
        return (ptr);
    return (NULL);
}

void Cure::use(ICharacter& target)
{
    std::cout<<"* heals "<<target.getName()<<"’s wounds *"<<std::endl;
}