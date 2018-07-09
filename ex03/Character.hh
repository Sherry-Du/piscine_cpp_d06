#ifndef CHARACTER_H_
# define CHARACTER_H_

#include <string>
#include "ICharacter.hh"

class Character : public ICharacter
{
public:
    explicit Character(std::string const& name);
    explicit Character(Character const& other);
    virtual ~Character();
    Character& operator=(Character const& other);

    std::string const& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
private:
    std::string _name;
    AMateria* _inventory[4];
};

#endif /* !CHARACTER_H_ */
