#include <iostream>
#include "Cure.hh"

Cure::Cure() :
    AMateria("cure")
{
}

Cure::~Cure()
{}

AMateria* Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
