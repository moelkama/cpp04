#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

# ifndef    INVENTORY_SIZE
# define    INVENTORY_SIZE 4
# endif

class Character: public ICharacter
{
private:
    std::string name;
    AMateria    **leaks;
    AMateria    **inventory;
public:
    Character();
    Character(std::string name);
    Character(const Character& other);
    Character&   operator=(const Character& other);

    ~Character();
    std::string const & getName() const ;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif