#include "AMateria.hh"
#include "IMateriaSource.hh"
#include "Character.hh"
#include "Ice.hh"
#include "MateriaSource.hh"
#include "Cure.hh"

int main()
 {
IMateriaSource* src = new MateriaSource();
 src->learnMateria(new Ice());
 src->learnMateria(new Cure());

 ICharacter* zaz = new Character("zaz");

 AMateria* tmp;
 tmp = src->createMateria("ice");
 zaz->equip(tmp);
 tmp = src->createMateria("cure");
 zaz->equip(tmp);

 ICharacter* bob = new Character("bob");

 zaz->use(0, *bob);
 zaz->use(1, *bob);

 delete bob;
 delete zaz;
 delete src;
return 0;
 }

