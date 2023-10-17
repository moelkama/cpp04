#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

# ifndef IDEAS_SIZE
# define IDEAS_SIZE 100
# endif

class Brain
{
private:
    std::string ideas[IDEAS_SIZE];
public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();
};

#endif