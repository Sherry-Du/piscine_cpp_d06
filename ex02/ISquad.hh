#ifndef ISQUAD_H_
#define ISQUAD_H_

class ISpaceMarine;

class ISquad
{
public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int) = 0;
    virtual int push(ISpaceMarine*) = 0;
};

#endif /* !ISQUAD_H_ */
