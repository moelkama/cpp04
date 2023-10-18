#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    std::cout<<"Character Constractor Called"<<std::endl;
    this->name = "not set";
    this->inventory = new   AMateria*[INVENTORY_SIZE];
    this->leaks = new   AMateria*[INVENTORY_SIZE];
    
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        this->inventory[i] = NULL;
        this->leaks[i] = NULL;
    }
}

Character::Character(std::string name)
{
    this->name = name;
    this->inventory = new   AMateria*[INVENTORY_SIZE];
    this->leaks = new   AMateria*[INVENTORY_SIZE];

    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        this->inventory[i] = NULL;
        this->leaks[i] = NULL;
    }
}

Character::Character(const Character& other)
{
    this->inventory = new   AMateria*[INVENTORY_SIZE];
    this->leaks = new   AMateria*[INVENTORY_SIZE];
    
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        this->inventory[i] = NULL;
        this->leaks[i] = NULL;
    }
    *this = other;
}

Character&   Character::operator=(const Character& other)
{
    this->name = other.name;
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        delete  this->inventory[i];
        if (other.inventory[i])
            this->inventory[i] = other.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
    return (*this);
}

Character::~Character()
{
    std::cout<<"Character Destructor Called"<<std::endl;
    for(int i = 0; i < INVENTORY_SIZE; i++)
    {
        delete  this->inventory[i]; // not important
        delete  this->leaks[i];
    }
    delete    this->inventory;
    delete    this->leaks;
}

const std::string& Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    int i = 0;

    for (i = 0; i < INVENTORY_SIZE &&  this->inventory[i]; i++);
    if (i < INVENTORY_SIZE)
        this->inventory[i] = m;
    else
        delete m;
    for (i = 0; i < INVENTORY_SIZE &&  this->leaks[i]; i++)
    {
        delete  this->leaks[i];
        this->leaks[i] = NULL;
    }
}

void Character::unequip(int idx)
{
    int i = 0;

    if (idx >= 0 && idx < INVENTORY_SIZE && this->inventory[idx])
    {
        for (i = 0; i < INVENTORY_SIZE &&  this->leaks[i]; i++);
        this->leaks[i] = this->inventory[idx];
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < INVENTORY_SIZE && this->inventory[idx])
        this->inventory[idx]->use(target);
}