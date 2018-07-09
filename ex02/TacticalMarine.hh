#ifndef TACTICALMARINE_H_
# define TACTICALMARINE_H_

#include "ISpaceMarine.hh"

class TacticalMarine : public ISpaceMarine
{
public:
    explicit TacticalMarine();
    virtual ~TacticalMarine();

    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif /* !TACTICALMARINE_H_ */
