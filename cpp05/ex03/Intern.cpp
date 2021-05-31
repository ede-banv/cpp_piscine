#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern::~Intern(){}

Intern&	Intern::operator=(const Intern& rhs)
{
	(void)rhs;
	return *this;
}

Form*	Intern::createShrubberyForm(std::string target) const
{ return new ShrubberyCreationForm(target); }

Form*	Intern::createRobotomyForm(std::string target) const
{ return new RobotomyRequestForm(target); }

Form*	Intern::createPardonForm(std::string target) const
{ return new PresidentialPardonForm(target); }

const Intern::createForms	Intern::intern_fct[3] =
{
	{"shrubbery creation", &Intern::createShrubberyForm},
	{"robotomy request", &Intern::createRobotomyForm},
	{"presidential pardon", &Intern::createPardonForm}
};

Form*	Intern::makeForm(std::string form_name, std::string target_name) const
{
	Form*	(Intern::*fonction)(std::string) const;
	for (int i = 0; i < 3; i++)
	{
		if (this->intern_fct[i].name == form_name)
		{
			fonction = this->intern_fct[i].fct;
			return ((*this.*fonction)(target_name));
		}
	}
	return NULL;
}