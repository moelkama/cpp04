#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain Default Constractor called"<<std::endl;
}

Brain::Brain(const Brain& other)
{
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    (void)other;///////////////////////////////////////////
    // this.ideas = other.ideas;
    return (*this);
}

Brain::~Brain()
{
    std::cout<<"Brain Destructor called"<<std::endl;
}