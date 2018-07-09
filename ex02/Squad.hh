#ifndef SQUAD_H_
# define SQUAD_H_

#include <vector>
#include "ISquad.hh"
#include "ISpaceMarine.hh"

class Squad : public ISquad
{
public:
    explicit Squad();
    virtual ~Squad();

    int getCount() const;
    ISpaceMarine* getUnit(int index);
    int push(ISpaceMarine* unit);
private:
    std::vector<ISpaceMarine*> _vector;
};

#endif /* !SQUAD_H_ */
