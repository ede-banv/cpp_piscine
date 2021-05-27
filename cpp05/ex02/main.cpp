#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		std::cout << "\n \e[1;36m** Bureaucrat tests ** \e[0m\n";
		Bureaucrat*	ml = new Bureaucrat("Marie-Lise", 65);
		Bureaucrat*	jeje = new Bureaucrat("Jehanne", 86);
		Bureaucrat*	emma = new Bureaucrat("Emma", 1);
		Bureaucrat*	martin = new Bureaucrat("Martin", 150);

		std::cout << "\n" << *ml << "\n" << *jeje << "\n" << *emma << "\n" << *martin;

		std::cout << "\nUpgrade Marie-Lise\n";
		ml->upgrade();
		std::cout << "Downgrade Jehanne\n";
		jeje->downgrade();
		std::cout << *ml << *jeje;
		std::cout << "\nUpgrade Emma\n";

		try
		{
			emma->upgrade();
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
		std::cout << "\nDowngrade Martin\n";
		try
		{
			martin->downgrade();
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}

		std::cout << "\n * Create Bureaucrats with grades too low and too high * \n";
		try
		{
			Bureaucrat("Celia", 151);
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
		try
		{
			Bureaucrat("Marc", 0);
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
		delete ml;
		delete jeje;
		delete emma;
		delete martin;
	}
	{
		std::cout << "\n \e[1;36m** Form tests ** \e[0m\n";
		Bureaucrat*	jojo = new Bureaucrat("Joscelyn", 84);
		Bureaucrat* staff = new Bureaucrat("Salty", 42);
		Form*		bh = new Form("Black Hole", 43, 22);
		std::cout << "\n" << *jojo << "\n" << *staff << std::endl;

		std::cout << *bh << std::endl;
		jojo->signForm(*bh);
		std::cout << *bh << std::endl;
		staff->signForm(*bh);
		std::cout << *bh << std::endl;

		std::cout << " * Creating forms with grades too low and too high * \n";
		try
		{
			Form("TOO LOW", 151, 151);
		}
		catch(std::exception& e)
		{
			std::cout << e.what();
		}
		try
		{
			Form("TOO HIGH", 0, 0);
		}
		catch(std::exception& e)
		{
			std::cout << e.what();
		}
	}
}