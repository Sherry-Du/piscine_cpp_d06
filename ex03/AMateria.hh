#ifndef AMATERIA_H_
# define AMATERIA_H_

#include <string>

class ICharacter;

class AMateria
{
public:
    explicit AMateria(std::string const& type);
    virtual ~AMateria();

    std::string const& getType() const;
    unsigned int getXP() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
private:
    unsigned int xp_;
    std::string type_;
};

#endif /* !AMATERIA_H_ */
