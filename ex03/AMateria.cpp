#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    std::cout<<"AMateria Default Constractor Called"<<std::endl;
}

AMateria::AMateria(std::string const& type)
{
    std::cout<<"AMateria Parameter Constractor Called"<<std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria& other)
{
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    (void)other;
    return (*this);
}

std::string const& AMateria::getType() const
{
    return (this->type);
}

AMateria::~AMateria()
{
    std::cout<<"AMateria Destructor Called"<<std::endl;
}

void AMateria::use(ICharacter& target)
{
    std::cout<<"* shoots an AMateria bolt at "<<target.getName()<<" *"<<std::endl;
}