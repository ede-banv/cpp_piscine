#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

	/* test = operator for MateriaSource */
	MateriaSource* lhs = new MateriaSource;
	MateriaSource* rhs = new MateriaSource;
	lhs->learnMateria(new Ice());
	rhs->learnMateria(new Cure());
	rhs->learnMateria(new Ice());
	*lhs = *rhs;
    ICharacter* me = new Character("me");

    AMateria* tmp;
	AMateria* copy = lhs->createMateria("cure");
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

	delete rhs;
	delete lhs;

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(1, *bob);
	*copy = *tmp;
    std::cout << "\n tmp cure xp: " << tmp->getXP() << "\n\n";

    tmp = src->createMateria("ice");
    bob->equip(tmp);
	bob->equip(copy);
    bob->use(0, *me);
    std::cout << "\n tmp ice xp: " << tmp->getXP() << "\n\n";

	bob->unequip(0);
	bob->use(0, *me);
	bob->use(1, *me);

	std::cout << "\n copy cure xp: " << copy->getXP() << "\n\n";

	/* test copy contructor and = operaotr */
	Character*	lhs_c = new Character("jim");
	Character*	rhs_c = new Character(*lhs_c);
	lhs_c->equip(tmp); //ice
	copy = src->createMateria("cure");
	rhs_c->equip(copy); //cure
	*lhs_c = *rhs_c;
	lhs_c->use(0, *bob); //should be cure

	delete rhs_c;
	delete lhs_c;
    delete bob;
    delete me;
    delete src;
    return 0;
}