#ifndef __INTERN__
# define __INTERN__

# include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& copy);
		virtual ~Intern();

		Intern&	operator=(const Intern& rhs);
		Form*	makeForm(std::string form_name, std::string form_target) const;
	private:
		struct createForms
		{
			std::string	name;
			Form*		(Intern::*fct)(std::string target) const;
		};

		static const struct createForms	intern_fct[3];
		Form*	createShrubberyForm(std::string target) const;
		Form*	createRobotomyForm(std::string target) const;
		Form*	createPardonForm(std::string target) const;

};

#endif
