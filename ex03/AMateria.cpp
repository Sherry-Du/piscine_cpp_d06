#include "AMateria.hh"
#include "ICharacter.hh"

AMateria::AMateria(std::string const& type) :
    xp_(0), type_(type)
{
}

AMateria::~AMateria()
{
}

std::string const& AMateria::getType() const
{
    return type_;
}

unsigned int AMateria::getXP() const
{
    return xp_;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    xp_ += 10;
}
