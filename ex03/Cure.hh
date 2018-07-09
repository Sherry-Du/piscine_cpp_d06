#ifndef CURE_H_
# define CURE_H_

#include "AMateria.hh"
#include "ICharacter.hh"

class Cure : public AMateria
{
public:
    Cure();
    virtual ~Cure();

    AMateria* clone() const;
    void use(ICharacter& target);
};



#endif /* !CURE_H_ */
