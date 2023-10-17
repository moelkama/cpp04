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
    for(int i = 0; i < IDEAS_SIZE; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout<<"Brain Destructor called"<<std::endl;
}