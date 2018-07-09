#include "Character.hh"

Character::Character(std::string const& name) :
    _name(name)
{
    for (int i = 0; i < 4; ++i)
        _inventory[i] = NULL;
}

Character::Character(Character const& other) :
    _name(other.getName())
{
    for (int i = 0; i < 4; ++i)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
    }
}

Character::~Character()
{}
    
Character& Character::operator=(Character const& other)
{
    _name = other._name;
    for (int i = 0; i < 4; ++i)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
    }
    return *this;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; ++i)
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return;
        }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
        return;
    if (!_inventory[idx])
        return;
    _inventory[idx]->use(target);

}

std::string const& Character::getName() const
{
    return _name;
}
