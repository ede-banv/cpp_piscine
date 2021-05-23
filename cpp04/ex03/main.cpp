#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(1, *bob);
    std::cout << "\n cure xp: " << tmp->getXP() << "\n\n";
    tmp = src->createMateria("ice");
    bob->equip(tmp);
    bob->use(0, *me);
    std::cout << "\n ice xp: " << tmp->getXP() << "\n\n";
    delete bob;
    delete me;
    delete src;
    return 0;
}