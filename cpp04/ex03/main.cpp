#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


int main()
{
	{
		std::cout << "\n ** Subject main test + xp verification ** \n";
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
		std::cout << "\n tmp cure xp: " << tmp->getXP() << "\n\n";

		tmp = src->createMateria("ice");
		bob->equip(tmp);
		bob->use(0, *me);
		std::cout << "\n tmp ice xp: " << tmp->getXP() << "\n\n";

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "\n ** Test for = operator of MateriaSource ** \n";
		MateriaSource* lhs = new MateriaSource();
		MateriaSource* rhs = new MateriaSource();
		lhs->learnMateria(new Ice());
		rhs->learnMateria(new Cure());
		rhs->learnMateria(new Ice());
		*lhs = *rhs;

		MateriaSource* copy = new MateriaSource(*rhs);

		AMateria*	tmp = lhs->createMateria("cure");
		if (tmp)
			std::cout << "Cure Materia successfully created from assigned MateriaSource\n";
		tmp = copy->createMateria("ice");
		if (tmp)
			std::cout << "Ice Materia successfully created from copied MateriaSource\n";

		delete copy;
		delete lhs;
		delete rhs;
	}
	{
		std::cout << "\n ** Test of AMateria assignation and = operator ** \n";
		Ice*	new_mat = new Ice();
		ICharacter* bob = new Character("bob");
		bob->equip(new_mat);
		bob->use(0, *bob);

		Ice*	assign = new Ice(*new_mat);
		std::cout << "assign " << assign->getType() << " has " << assign->getXP() << " XP after copy creation\n";
		bob->use(0, *bob);

		*assign = *new_mat;
		std::cout << "assign " << assign->getType() << " has " << assign->getXP() << " XP after assignation\n";

		delete bob;
		delete assign;
	}
	{
		std::cout << "\n ** Test for Character assignation and copy contructor ** \n";
		Character*	marc = new Character("Marc");
		Character*	marc2 = new Character(*marc);

		std::cout << "marc2's name is " << marc2->getName() << std::endl;

		AMateria*	ice = new Ice();
		AMateria*	cure = new Cure();

		marc->equip(ice);
		marc2->equip(cure);

		*marc2 = *marc;
		std::cout << "marc2 has uses his Materia\n";
		marc2->use(0, *marc);

		delete marc;
		delete marc2;
	}
	return 0;
}
