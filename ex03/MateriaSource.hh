#ifndef MATERIASOURCE_H_
#define MATERIASOURCE_H_

#include "AMateria.hh"
#include "IMateriaSource.hh"
#include "Character.hh"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    virtual ~MateriaSource() {}

    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const& type);
private:
    AMateria* _inventory[4];
};

#endif /* !MATERIASOURCE_H_ */
