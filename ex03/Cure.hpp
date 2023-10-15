#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure: public AMateria
{
private:
public:
    Cure();
    Cure(const Cure& other);
    Cure&   operator=(const Cure& other);
    ~Cure();

    Cure* clone() const;
    void use(ICharacter& target);
};

#endif