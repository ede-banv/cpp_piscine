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
			Form*		(Intern::*fct)(std::string target);
		};

		static const struct createForms	intern_fct[3];
		Form*	createShrubberyForm(std::string target);
		Form*	createRobotomyForm(std::string target);
		Form*	createPardonForm(std::string target);

};

#endif
