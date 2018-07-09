#include "MateriaSource.hh"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        _inventory[i] = NULL;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; ++i)
        if (!_inventory[i])
        {
            _inventory[i] = m->clone();
            return;
        }
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; ++i)
        if (_inventory[i])
            if (_inventory[i]->getType() == type)
                return _inventory[i]->clone();
    return NULL;
}
