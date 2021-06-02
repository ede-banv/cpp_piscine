#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

		delete jojo;
		delete staff;
		delete bh;
	}
	{
		std::cout << "\n \e[1;36m** Derivated form tests ** \e[0m\n";
		Bureaucrat*	fisso = new Bureaucrat("Sophie Viger", 1);
		Bureaucrat*	wemiss = new Bureaucrat("Benny", 21);
		Bureaucrat*	staff = new Bureaucrat("Melissa", 42);
		Bureaucrat*	tuteur = new Bureaucrat("Hugo", 71);
		Bureaucrat*	stud = new Bureaucrat("Marc", 135);
		Bureaucrat*	piscineux = new Bureaucrat("Roman", 146);

		Form*		shrub = new ShrubberyCreationForm("terrasse");
		Form*		robocop = new RobotomyRequestForm("Alexandre");
		Form*		plez = new PresidentialPardonForm("Norminet");

		std::cout << *shrub << "\n" << *piscineux << "\n" << *stud << std::endl;
		piscineux->signForm(*shrub);
		piscineux->upgrade();
		std::cout << *piscineux << std::endl;
		piscineux->signForm(*shrub);
		std::cout << std::endl;
		stud->executeForm(*shrub);

		std::cout << *robocop << "\n" << *tuteur << "\n" << *staff << std::endl;
		staff->executeForm(*robocop);
		tuteur->signForm(*robocop);
		staff->executeForm(*robocop);
		std::cout << std::endl;

		std::cout << *plez << "\n" << *wemiss << "\n" << *fisso << std::endl;
		wemiss->signForm(*plez);
		fisso->executeForm(*plez);

		delete plez;
		delete robocop;
		delete shrub;
		delete piscineux;
		delete stud;
		delete tuteur;
		delete staff;

		ShrubberyCreationForm*	shrub1 = new ShrubberyCreationForm("ausol");
		ShrubberyCreationForm*	shrub2 = new ShrubberyCreationForm("auciel");

		std::cout << "shrub1:\n" << *shrub1 << "\nshrub2:\n" << *shrub2 << std::endl;
		std::cout << "Shophie signs shrub1\n";
		fisso->signForm(*shrub1);
		*shrub2 = *shrub1;
		std::cout << "\nBenny attemps to excecute shrub2 after assignation from shrub1";
		wemiss->executeForm(*shrub2);

		delete wemiss;
		delete fisso;
		delete shrub2;
		delete shrub1;
	}
	{
		std::cout << "\n \e[1;36m** Intern tests ** \e[0m\n";
		Intern*		baby = new Intern();
		Bureaucrat*	jojo = new Bureaucrat("Joscelyn", 121);
		Bureaucrat*	alex = new Bureaucrat("Alexandre", 42);
		Bureaucrat*	charly = new Bureaucrat("Charly", 5);
		Form*		rform;

		rform = baby->makeForm("shrubbery creation", "big_house");
		std::cout << *rform << std::endl;
		jojo->signForm(*rform);
		jojo->executeForm(*rform);
		delete rform;

		std::cout << std::endl;
		rform = baby->makeForm("robotomy request", "Jean-Xavier");
		std::cout << *rform << std::endl;
		alex->signForm(*rform);
		alex->executeForm(*rform);
		delete rform;

		std::cout << std::endl;
		rform = baby->makeForm("presidential pardon", "Jeremy");
		std::cout << *rform << std::endl;
		charly->signForm(*rform);
		charly->executeForm(*rform);
		delete rform;

		std::cout << std::endl;
		rform = baby->makeForm("inexistente form", "Celia");
		if (!rform)
			std::cout << "Form wasn't created.\n";
		else
			delete rform;
	}
}