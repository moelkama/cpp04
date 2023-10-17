#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout<<"Ice Constractor Called"<<std::endl;
}

Ice::Ice(const Ice& other)
{
    *this = other;
}

Ice&   Ice::operator=(const Ice& other)
{
    (void)other;
    return (*this);
}

Ice::~Ice()
{
    std::cout<<"Ice Destructor Called"<<std::endl;
}

Ice* Ice::clone() const
{
    Ice *ptr;

    ptr = new   Ice();
    if (ptr)
        return (ptr);
    return (NULL);
}

void Ice::use(ICharacter& target)
{
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}