#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    std::cout<<"Character Constractor Called"<<std::endl;
    this->inventory = new   AMateria*[INVENTORY_SIZE];
    //chof new NULL;
    
    for (int i = 0; i < INVENTORY_SIZE; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string name)
{
    this->name = name;
    if (!this->inventory)
    {
        this->inventory = new   AMateria*[INVENTORY_SIZE];
        //chof new NULL;

        for (int i = 0; i < INVENTORY_SIZE; i++)
            this->inventory[i] = NULL;
    }
}

Character::Character(const Character& other)
{
    *this = other;
}

Character&   Character::operator=(const Character& other)
{
    //this->type = other.type;
    (void)other;
    return (*this);
}

Character::~Character()
{
    std::cout<<"Character Destructor Called"<<std::endl;
    for(int i = 0; i < INVENTORY_SIZE; i++)
    delete[]    inventory;
}

const std::string& Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    int i = 0;

    for (i = 0; i < INVENTORY_SIZE && this->inventory[i]; i++);
    if (i < INVENTORY_SIZE)
        this->inventory[i] = m;
}

void Character::unequip(int idx)
{
    if (idx < INVENTORY_SIZE)
        this->inventory[idx] = NULL; //must not deleted -->subject
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < INVENTORY_SIZE)
        this->inventory[idx]->use(target);
}