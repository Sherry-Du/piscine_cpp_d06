#ifndef ICE_H_
# define ICE_H_

#include "AMateria.hh"
#include "ICharacter.hh"

class Ice : public AMateria
{
public:
    Ice();
    virtual ~Ice();

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif /* !ICE_H_ */
