#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\n \e[1;36m** Bureaucrat tests ** \e[0m\n";
	Bureaucrat*	ml = new Bureaucrat("Marie-Lise", 65);
	Bureaucrat*	jeje = new Bureaucrat("Jehanne", 86);
	Bureaucrat*	emma = new Bureaucrat("Emma", 1);
	Bureaucrat*	martin = new Bureaucrat("Martin", 150);

	std::cout << "\n" << *ml << "\n" << *jeje << "\n" << *emma << "\n" << *martin;

	std::cout << "\nUpgrade Marie-Lise\n";
	ml->upgrade();
	std::cout << "\nDowngrade Jehanne\n";
	jeje->downgrade();
	std::cout << *ml << *jeje;
	std::cout << "\nUpgrade Emma\n";
	try
	{
		emma->upgrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}

	std::cout << "\nDowngrade Martin\n";
	try
	{
		martin->downgrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}

	std::cout << "\nCreate Bureaucrats with grades too low and too high\n";
	try
	{
		Bureaucrat("Celia", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat("Marc", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}